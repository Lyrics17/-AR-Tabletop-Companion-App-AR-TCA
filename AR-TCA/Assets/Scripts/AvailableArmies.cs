using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class AvailableArmies : MonoBehaviour
{
    //References to Dropdowns
    public TMP_Dropdown factionDropdown;
    public TMP_Dropdown unitsDropdown;

    //References to Texts in GUI
    public TextMeshProUGUI displayMessageGUI;
    public TextMeshProUGUI powerTextGUI;
    public TextMeshProUGUI pointsTextGUI;
    public TextMeshProUGUI cpTextGUI;
    public TextMeshProUGUI battlefieldRoleTextGUI;

    //Utility Variables
    private string unitIDs;

    //References to Data Containers
    public GameObject[] dataContainers;
    public TextMeshProUGUI[] dataText;

    private void Awake()
    {
        resetArmyManager();
        StartCoroutine(getAvailableArmies());
    }

    IEnumerator getAvailableArmies()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Users/getUserFactions.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Users/getUserFactions.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Users/getUserFactions.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("username", DBManager.username);
        // form.AddField("username", "admin");

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
                if (www.downloadHandler.text.Contains("0")) //User has armies in db
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("!");
                    string response = www.downloadHandler.text.Substring(indexOfString + 1);

                    //Split factionList into array
                    string[] factions = response.Split('_');

                    //Add factions to dropdown
                    foreach (string faction in factions)
                    {
                        factionDropdown.options.Add(new TMP_Dropdown.OptionData(faction));
                    }
                }
                else if (www.downloadHandler.text.Contains("1"))
                {
                    displayMessageGUI.text = "Dieses Konto hat derzeit keine Armeeliste!";
                }
            }
        }
    }

    private void enableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(true);
        }
    }

    public void callGetGUIData()
    {
        StartCoroutine(getGUIData());
    }

    IEnumerator getGUIData()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Users/getUserArmy.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Users/getUserArmy.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Users/getUserArmy.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("factionName", factionDropdown.captionText.text);
        form.AddField("username", DBManager.username);
        // form.AddField("username", "admin");
        ArmyManager.selectedFaction = factionDropdown.captionText.text; //is used to pass the selected faction to the army builder scene

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
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfStringUnitNames = www.downloadHandler.text.IndexOf("!");
                    int indexOfStringPowerCost = www.downloadHandler.text.IndexOf("|");
                    int indexOfStringPointCost = www.downloadHandler.text.IndexOf("%");
                    int indexOfStringUnitIDs = www.downloadHandler.text.IndexOf("&");

                    string unitNames = www.downloadHandler.text.Substring(indexOfStringUnitNames + 1, indexOfStringPowerCost - indexOfStringUnitNames - 1);
                    string powerCost = www.downloadHandler.text.Substring(indexOfStringPowerCost + 1, indexOfStringPointCost - indexOfStringPowerCost - 1);
                    string pointCost = www.downloadHandler.text.Substring(indexOfStringPointCost + 1, indexOfStringUnitIDs - indexOfStringPointCost - 1);
                    unitIDs = www.downloadHandler.text.Substring(indexOfStringUnitIDs + 1);

                    string[] unitIDsArray = (unitIDs.Split('_'));

                    ArmyManager.selectedUnits.Clear();

                    foreach (string unitID in unitIDsArray)
                    {
                        if (unitID != "")
                        {
                            ArmyManager.selectedUnits.Add(unitID);
                        }
                    }

                    ArmyManager.powerCost = powerCost;
                    ArmyManager.pointsCost = pointCost;

                    powerTextGUI.text = " " + powerCost;
                    pointsTextGUI.text = " " + pointCost;

                    determineCP(Int32.Parse(powerCost));
                    //Split unitNames into array
                    string[] units = unitNames.Split('_');

                    //Add factions to dropdown

                    unitsDropdown.ClearOptions();
                    unitsDropdown.options.Add(new TMP_Dropdown.OptionData("Einheiten"));

                    foreach (string unit in units)
                    {
                        unitsDropdown.options.Add(new TMP_Dropdown.OptionData(unit));
                    }

                    unitsDropdown.value = 1;
                }
                else if (www.downloadHandler.text.Contains("1"))
                {
                    powerTextGUI.text = " 0";
                    pointsTextGUI.text = " 0";
                    cpTextGUI.text = " 0";
                    unitsDropdown.ClearOptions();
                    unitsDropdown.options.Add(new TMP_Dropdown.OptionData("Einheiten"));
                    unitsDropdown.value = 1;
                    battlefieldRoleTextGUI.text = "";
                    disableDataContainers();
                    resetArmyManager();
                }
            }
        }
    }

    private void determineCP(int pointCost)
    {
        if (pointCost <= 500)
        {
            cpTextGUI.text = " 3";
        }
        else if (500 < pointCost && pointCost <= 1000)
        {
            cpTextGUI.text = " 6";
        }
        else if (1000 < pointCost && pointCost <= 2000)
        {
            cpTextGUI.text = " 12";
        }
        else
        {
            cpTextGUI.text = " 18";
        }
    }
    public void callGetUnitData()
    {
        StartCoroutine(getUnitData());
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
        //Imported! fieldname = db fieldname
        form.AddField("unitName", unitsDropdown.captionText.text);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("_"); //finds the first "_" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 1); //cuts the string from the first "_ + 1" to the end

                    string[] responseArray = response.Split('_');

                    string unitID = responseArray[responseArray.Length - 3];

                    //Save Unit Data into Array for frontend display
                    for (int i = 0; i < responseArray.Length - 3; i++)
                    {
                        //dataText index needs to start at 0!
                        dataText[i].text = responseArray[i];
                    }
                    enableDataContainers();

                    StartCoroutine(getUnitBattlefieldRole(unitID));
                }
            }
        }
    }

    IEnumerator getUnitBattlefieldRole(string unitID)
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/getUnitBattlefieldRole.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/getUnitBattlefieldRole.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnitBattlefieldRole.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("unitID", unitID);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("_"); //finds the first "_" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 1); //cuts the string from the first "_ + 1" to the end

                    battlefieldRoleTextGUI.text = " " + response;
                }
            }
        }
    }

    private void resetArmyManager()
    {
        //Refresh ArmyManager if the user returns form the army builder
        ArmyManager.powerCost = null;
        ArmyManager.pointsCost = null;
        ArmyManager.selectedFaction = null;
        ArmyManager.selectedUnits.Clear();
    }

    private void disableDataContainers()
    {
        foreach (GameObject container in dataContainers)
        {
            container.SetActive(false);
        }
    }
}
