using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;

public class AddUnitToArmyList : MonoBehaviour
{

    /* TODO: wenn eine fraktion gewählt wird hole alle einheiten dieser fraktion und speichere es in einen array. dieser wird ins dropdown geladen.
            wird eine schlachtfeldrolle ausgewählt, wird der array durchiteriert und alle einheiten dieser schlachtfeldrolle werden in einen neuen array gespeichert und angezeigt.

        TODO: änder die farbe von den macht/punkte anzeigern auf schwarz wenn es nicht 0 ist und wieder zurück auf grau wenn == 0

        TODO: überlegen wie die einheit entfernen logik funkten könnte
    */
    public TMP_Dropdown battleSizeDropdown;
    public TMP_Dropdown factionDropdown;
    public TMP_Dropdown unitToInsertDropdown;
    public Button qrCodeButton;
    public Button addUnitButton;
    public Button submitUnitButton;
    public TextMeshProUGUI powerlimit;
    public TextMeshProUGUI pointslimit;
    public TextMeshProUGUI power;
    public TextMeshProUGUI points;
    public GameObject[] dataContainers;
    public TextMeshProUGUI[] dataText;

    private void Update()
    {
        toggleUnitToInsertDropdown();
        toggleAddUnitButton();
        toggleSubmitUnitButton();
    }

    private bool checkIfFactionTextIsDefaultText()
    {
        return factionDropdown.captionText.text == "Bitte Fraktion auswaehlen";
    }

    private bool checkIfUnitDdIsDefault()
    {
        return unitToInsertDropdown.captionText.text == "Bitte Einheit waehlen" || unitToInsertDropdown.captionText.text == "";
    }

    private bool checkIfAUnitWasAdded()
    {
        if (power.text != " Macht:" && points.text != " Punkte:")
        { return true; }
        else
        { return false; }
    }

    public void displayPowerPointLimit()
    {

        powerlimit.text = " Machtlimit:";
        pointslimit.text = " Punktelimit";

        string powerlimitValue = "";
        string pointlimitValue = "";
        switch (battleSizeDropdown.captionText.text)
        {
            case "Kampfpatroullie":
                powerlimitValue = " 0 - 50";
                powerlimit.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 0 - 500";
                pointslimit.color = Color.black;
                break;

            case "Aufmarsch":
                powerlimitValue = " 51 - 100";
                powerlimit.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 501 - 1000";
                pointslimit.color = Color.black;
                break;

            case "Einsatzverband":
                powerlimitValue = " 101 - 200";
                powerlimit.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 1001 - 2000";
                pointslimit.color = Color.black;
                break;

            case "Grossaufgebot":
                powerlimitValue = " 201 - 300";
                powerlimit.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 2001 - 3000";
                pointslimit.color = Color.black;
                break;

            case "Bitte Schlachtgroesse waehlen":
                powerlimitValue = "";
                powerlimit.color = Color.grey;
                pointlimitValue = "";
                pointslimit.color = Color.grey;
                break;
        }

        powerlimit.text += powerlimitValue;
        pointslimit.text += pointlimitValue;
    }

    public void toggleUnitToInsertDropdown()
    {
        unitToInsertDropdown.interactable = !checkIfFactionTextIsDefaultText();
    }

    public void toggleAddUnitButton()
    {
        addUnitButton.interactable = !checkIfUnitDdIsDefault();
        qrCodeButton.interactable = !checkIfUnitDdIsDefault();
    }

    public void toggleSubmitUnitButton()
    {
        submitUnitButton.interactable = checkIfAUnitWasAdded();
    }

    private void enableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(true);
        }
    }

    public void callGetUnitFromFaction()
    {
        StartCoroutine(getUnitFromFaction());
    }

    IEnumerator getUnitFromFaction()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/addUnit.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/addUnit.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnitsFromFaction.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("factionName", factionDropdown.captionText.text);
        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            //wait till www has a return value and than proceeds with the code
            yield return www.SendWebRequest();

            //only checks for "real" errors! exist(); in php dont count
            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("_");

                    string response = www.downloadHandler.text.Substring(indexOfString + 1);
                    string[] responseArray = response.Split('_');

                    unitToInsertDropdown.ClearOptions();
                    unitToInsertDropdown.options.Add(new TMP_Dropdown.OptionData("Bitte Einheit waehlen"));

                    foreach (string unit in responseArray)
                    {
                        unitToInsertDropdown.options.Add(new TMP_Dropdown.OptionData(unit));
                    }

                    unitToInsertDropdown.value = 0; //sets the value to the first element in the dropdown
                }
            }
        }
    }

    public void callGetUnitData()
    {
        if (!checkIfUnitDdIsDefault()) //only start coroutine if a unit is selected
        {
            StartCoroutine(getUnitData());
        }
    }

    IEnumerator getUnitData()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/addUnit.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/addUnit.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnit.php";

        WWWForm form = new WWWForm();
        form.AddField("unitName", unitToInsertDropdown.captionText.text);

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
                    int indexOfString = www.downloadHandler.text.IndexOf("_"); //finds the first "_" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 1); //cuts the string from the first "_ + 1" to the end

                    string[] responseArray = response.Split('_');

                    //Save Unit Data into Array for frontend display
                    for (int i = 0; i < responseArray.Length; i++)
                    {
                        //dataText index needs to start at 0!
                        dataText[i].text = responseArray[i];
                    }

                    //Add Power and Point cost 
                }
            }
        }
    }
}
