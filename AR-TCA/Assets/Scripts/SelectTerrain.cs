using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;

public class SelectTerrain : MonoBehaviour
{
    public TMP_Dropdown terrainPiece;
    public TextMeshProUGUI terrainCategory;
    public TextMeshProUGUI terrainAttributes;
    public TextMeshProUGUI popUpHeader;
    public TextMeshProUGUI displayMessage;
    public Button generateTerrainQRCodeButton;
    public GameObject popUp;
    public QRCodeGenerator generator;
    public SaveQRCode saver;
    public void callGetTerrain()
    {
        StartCoroutine(getTerrain());
    }

    IEnumerator getTerrain()
    {
        string url = "http://localhost/AR-TCA/Terrain/getTerrain.php";
        WWWForm form = new WWWForm();

        form.AddField("terrainPiece", terrainPiece.captionText.text);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("!"); //finds the first "!" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 2); //cuts the string from the first "! + 2" to the end

                    string[] responseArray = response.Split('_'); //splits the string at the "_" character
                    terrainCategory.text = responseArray[1];
                    terrainAttributes.text = responseArray[3];

                    generator.GetComponent<QRCodeGenerator>().encodeTextToQRCode(terrainPiece.captionText.text);
                    popUpHeader.text = "Gelaendestueck QR-Code";
                }
            }
        }
    }

    public void resetFields()
    {
        if (terrainPiece.captionText.text == "Bitte auswaehlen") //if the dropdown is set to "Bitte auswaehlen" reset UI
        {
            terrainCategory.text = "";
            terrainAttributes.text = "";
        }
    }

    public void makeButtonsInteractable()
    {
        if (terrainPiece.captionText.text != "Bitte auswaehlen") //set Button to interactable if the dropdown is not set to "Bitte auswaehlen"
        {
            generateTerrainQRCodeButton.interactable = true;
        }
        else
        {
            generateTerrainQRCodeButton.interactable = false;
        }
    }

    public void generateMarkerQRCode()
    {
        generator.GetComponent<QRCodeGenerator>().encodeTextToQRCode("Marker");
        popUpHeader.text = "Missionszielmarker QR-Code";
    }

    public void saveQRCode()
    {
        string filename;
        
        if (popUpHeader.text == "Gelaendestueck QR-Code")//popUpHeader is used to indicate which QRCode is being saved/displayed 
        {
            filename = terrainPiece.captionText.text;
        }
        else
        {
            filename = "Marker";
        }

        saver.GetComponent<SaveQRCode>().saveQRCodeOnDevice(generator.GetComponent<QRCodeGenerator>().getTexture(), filename);

        if (filename == "Marker")
        {
            displayMessage.text = "Missionszielmarker wurde gespeichert!";
        }
        else
        {
            displayMessage.text = "Gelaendestueck wurde gespeichert!";
        }
    }
}
