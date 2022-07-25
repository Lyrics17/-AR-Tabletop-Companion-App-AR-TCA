using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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
        return unitToInsertDropdown.captionText.text == "Bitte Einheit waehlen";
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
}
