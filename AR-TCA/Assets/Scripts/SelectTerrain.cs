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
                    //TODO: Split echo response into separate variables and insert them into the UI
                }
            }
        }
    }

    public void resetFields()
    {
        if (terrainPiece.captionText.text == "Bitte auswaehlen")
        {
            terrainCategory.text = "";
            terrainAttributes.text = "";
        }
    }

    public void makeButtonsInteractable()
    {
        if (terrainPiece.captionText.text != "Bitte auswaehlen")
        {
            generateTerrainQRCodeButton.interactable = true;
        }
        else
        {
            generateTerrainQRCodeButton.interactable = false;
        }
    }

    // TODO: add qrCode save function
}
