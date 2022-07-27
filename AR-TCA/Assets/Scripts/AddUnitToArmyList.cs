using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;

public class AddUnitToArmyList : MonoBehaviour
{
    /* 

            TODO: debug.logs entfernen & code kommentieren

            TODO: logic schreiben das maybe wenn eine armylist eintrag mit username + factionname existiert die werte hier reingeladen werden -> arraylist dropdown selected usw. 

            TODO: available armylists in der scene davor selecten 
    */
    //References to Dropdowns
    public TMP_Dropdown battleSizeDropdown;
    public TMP_Dropdown factionDropdown;
    public TMP_Dropdown battlefieldRoleDropdown;
    public TMP_Dropdown unitToInsertDropdown;

    //References to Buttons
    public Button generateQRCodeButton;
    public Button saveQRCodeButton;
    public Button addUnitButton;
    public Button removeUnitButton;
    public Button saveArmyButton;

    //References to Textsfield in GUI
    public TextMeshProUGUI powerlimitGUI;
    public TextMeshProUGUI pointslimitGUI;
    public TextMeshProUGUI currentPowerValueGUI;
    public TextMeshProUGUI currentPointsValueGUI;
    public TextMeshProUGUI displayMessageGUI;
    public TextMeshProUGUI popupHeaderMessageGUI;

    //References to Data Containers
    public GameObject[] dataContainers;
    public TextMeshProUGUI[] dataText;

    //Utility vars
    private string unitID;
    private ArrayList unitIDList = new ArrayList(); //ArrayList to store all unitIDs which are going to be added to the army list
    private int powerCostOfUnit; //cost of the selected unit
    private int powerCostSumOfUnits = 0; //sum of cost of added units 
    private int powerCostLimit; //max power of army list 
    private int pointsCostOfUnit;
    private int pointsCostSumOfUnits = 0;
    private int pointsCostLimit;
    private string currentSelectedFaction;
    public QRCodeGenerator generator; //reference of GameObject in the Scene with the QRCodeGenerator script as component
    public SaveQRCode saver; //reference of GameObject in the Scene with the SaveQRCode script as component

    private void Update()
    {
        toggleUnitToInsertDropdown();
        toggleUnitButtons();
        toggleSubmitUnitButton();
    }

    private bool checkIfFactionTextIsDefaultText()
    {
        return factionDropdown.captionText.text == "Bitte Fraktion auswaehlen";
    }

    private bool checkIfUnitDdIsDefault()
    {
        if (unitToInsertDropdown.captionText.text == "Bitte Einheit waehlen"
        || unitToInsertDropdown.captionText.text == ""
        || unitToInsertDropdown.captionText.text == "Keine Einheiten vorhanden")
        {
            disableDataContainers();
            return true;
        }
        else
        {
            enableDataContainers();
            return false;
        }
    }

    private bool checkIfAUnitWasAdded()
    {
        if (powerCostSumOfUnits != 0 && pointsCostSumOfUnits != 0 || powerCostSumOfUnits < 0 && pointsCostSumOfUnits < 0)
        { return true; }
        else
        { return false; }
    }

    private bool checkIfSumOfUnitCostSmallerThanLimit()
    {
        if (powerCostSumOfUnits <= powerCostLimit && pointsCostSumOfUnits <= pointsCostLimit)
        { return true; }
        else
        { return false; }
    }

    public void displayPowerPointLimit() //called by battleSizeDropdown
    {

        powerlimitGUI.text = " Machtlimit:";
        pointslimitGUI.text = " Punktelimit";

        string powerlimitValue = "";
        string pointlimitValue = "";
        switch (battleSizeDropdown.captionText.text)
        {
            case "Kampfpatroullie":
                powerlimitValue = " 0 - 50";
                powerCostLimit = 50;
                powerlimitGUI.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 0 - 500";
                pointsCostLimit = 500;
                pointslimitGUI.color = Color.black;
                break;

            case "Aufmarsch":
                powerlimitValue = " 51 - 100";
                powerCostLimit = 100;
                powerlimitGUI.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 501 - 1000";
                pointsCostLimit = 1000;
                pointslimitGUI.color = Color.black;
                break;

            case "Einsatzverband":
                powerlimitValue = " 101 - 200";
                powerCostLimit = 200;
                powerlimitGUI.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 1001 - 2000";
                pointsCostLimit = 2000;
                pointslimitGUI.color = Color.black;
                break;

            case "Grossaufgebot":
                powerlimitValue = " 201 - 300";
                powerCostLimit = 300;
                powerlimitGUI.color = Color.black; //Changes the color of the text back again to black
                pointlimitValue = " 2001 - 3000";
                pointsCostLimit = 3000;
                pointslimitGUI.color = Color.black;
                break;

            case "Bitte Schlachtgroesse waehlen":
                powerlimitValue = "";
                powerlimitGUI.color = Color.grey;
                pointlimitValue = "";
                pointslimitGUI.color = Color.grey;
                break;
        }

        powerlimitGUI.text += powerlimitValue;
        pointslimitGUI.text += pointlimitValue;
    }

    private void toggleUnitToInsertDropdown()
    {
        unitToInsertDropdown.interactable = !checkIfFactionTextIsDefaultText();
    }

    private void toggleUnitButtons()
    {
        addUnitButton.interactable = !checkIfUnitDdIsDefault();
        removeUnitButton.interactable = checkIfAUnitWasAdded() && unitIDList.Contains(unitID); //unitID is changed when a new unit is selected
        generateQRCodeButton.interactable = !checkIfUnitDdIsDefault();
    }

    private void toggleSubmitUnitButton()
    {
        if (checkIfAUnitWasAdded() && checkIfSumOfUnitCostSmallerThanLimit())
        {
            saveArmyButton.interactable = true;
            addUnitButton.interactable = true;
            displayMessageGUI.text = "";
        }
        else if (!checkIfSumOfUnitCostSmallerThanLimit())
        {
            saveArmyButton.interactable = false;
            addUnitButton.interactable = false;
            displayMessageGUI.text = "Das Wertelimit wurde ueberschritten!";
        }
    }

    private void enableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(true);
        }
    }

    private void disableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(false);
        }
        resetDataText();
    }

    private void resetDataText()
    {
        foreach (TextMeshProUGUI dataText in dataText)
        {
            dataText.text = "";
        }
    }

    private void resetGUI()
    {
        battlefieldRoleDropdown.value = 0;
        unitToInsertDropdown.ClearOptions();
        unitToInsertDropdown.options.Add(new TMP_Dropdown.OptionData("Bitte Einheit waehlen"));
        unitToInsertDropdown.value = 0;

        disableDataContainers();

        unitIDList.Clear(); //Removes all stored value

        powerCostSumOfUnits = 0;
        pointsCostSumOfUnits = 0;

        currentPowerValueGUI.text = " Macht: ";
        currentPointsValueGUI.text = " Punkte: ";
    }

    public void addUnitToArmyList() //called from addUnitButton
    {
        unitIDList.Add(unitID);
        powerCostSumOfUnits += powerCostOfUnit;
        pointsCostSumOfUnits += pointsCostOfUnit;
        currentPowerValueGUI.color = Color.black;
        currentPowerValueGUI.text = " Macht: " + powerCostSumOfUnits;
        currentPointsValueGUI.color = Color.black;
        currentPointsValueGUI.text = " Punkte: " + pointsCostSumOfUnits;
    }

    public void removeUnitFromArmyList() //called from removeUnitButton
    {
        unitIDList.Remove(unitID);
        powerCostSumOfUnits -= powerCostOfUnit;
        pointsCostSumOfUnits -= pointsCostOfUnit;
        currentPowerValueGUI.text = " Macht: " + powerCostSumOfUnits;
        currentPointsValueGUI.text = " Punkte: " + pointsCostSumOfUnits;
    }


    public void callGetUnitFromFaction() //called from factionDropdown
    {
        resetGUI();
        StartCoroutine(getUnitFromFaction());
    }

    IEnumerator getUnitFromFaction()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/getUnitsFromFaction.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/getUnitsFromFaction.php";
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
                    unitToInsertDropdown.value = 1;
                }
                else if (www.downloadHandler.text.Contains("1"))
                {
                    unitToInsertDropdown.ClearOptions();
                    unitToInsertDropdown.options.Add(new TMP_Dropdown.OptionData("Keine Einheiten vorhanden"));
                    unitToInsertDropdown.value = 1; //sets the dropdown to the first value 
                }
            }
        }
    }

    public void callGetUnitFromBattlefieldRole() //called from battlefieldRoleDropdown
    {
        if (!checkIfFactionTextIsDefaultText())
        {
            StartCoroutine(getUnitFromBattlefieldRole());
        }
    }

    IEnumerator getUnitFromBattlefieldRole()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/getUnitsFromBattlefieldRole.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/getUnitsFromBattlefieldRole.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnitsFromBattlefieldRole.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("battlefieldRoleName", battlefieldRoleDropdown.captionText.text);
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
                    unitToInsertDropdown.value = 1;
                }
                else if (www.downloadHandler.text.Contains("1"))
                {
                    if (battlefieldRoleDropdown.captionText.text == "Bitte Schlachtfeldrolle auswaehlen")
                    {
                        StartCoroutine(getUnitFromFaction());
                    }
                    else
                    {
                        unitToInsertDropdown.ClearOptions();
                        unitToInsertDropdown.options.Add(new TMP_Dropdown.OptionData("Keine Einheiten vorhanden"));
                        unitToInsertDropdown.value = 1; //sets the dropdown to the first value 
                        disableDataContainers();
                    }
                }
            }
        }
    }

    public void callGetUnitData() //called from unitToInsertDropdown
    {
        if (!checkIfUnitDdIsDefault()) //only start coroutine if a unit is selected
        {
            StartCoroutine(getUnitData());
        }
    }

    IEnumerator getUnitData()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/getUnitAllData.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/getUnitAllData.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnitAllData.php";

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

                    unitID = responseArray[responseArray.Length - 3];
                    powerCostOfUnit = Int16.Parse(responseArray[responseArray.Length - 2]); //second to last element in the array is the power cost
                    pointsCostOfUnit = Int16.Parse(responseArray[responseArray.Length - 1]); //last element in the array is the points cost

                    Debug.Log("ID:" + unitID + "power:" + powerCostOfUnit + " points:" + pointsCostOfUnit);

                    generator.GetComponent<QRCodeGenerator>().encodeTextToQRCode(unitToInsertDropdown.captionText.text);

                    //Save Unit Data into Array for frontend display
                    for (int i = 0; i < responseArray.Length - 3; i++)
                    {
                        //dataText index needs to start at 0!
                        dataText[i].text = responseArray[i];
                    }
                    enableDataContainers();
                }
            }
        }
    }

    public void callInsertArmyList()
    {
        StartCoroutine(insertArmyList());
    }

    IEnumerator insertArmyList()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/getUnitAllData.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/getUnitAllData.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/addArmyList.php";

        string unitIDs = "";

        foreach (var id in unitIDList) //concate the added unitIDs to a string separated by "_" to be splited in the php script
        {
            unitIDs += "_" + id;
        }

        WWWForm form = new WWWForm();
        // form.AddField("username", DBManager.username); //TODO: wieder einkommentieren wenn man builded. funktioniert nicht wenn man in der szenen testet
        form.AddField("username", "admin");
        form.AddField("factionName", factionDropdown.captionText.text);
        form.AddField("unitIDs", unitIDs);

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
            }
        }
    }

    public void onClickSaveQRCode()
    {
        saver.GetComponent<SaveQRCode>().saveQRCodeOnDevice(generator.GetComponent<QRCodeGenerator>().getTexture(), "Unit_" + unitToInsertDropdown.captionText.text);
        popupHeaderMessageGUI.text = "QR Code wurde gespeichert";
    }
}
