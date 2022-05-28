using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;

public class AddNewUnit : MonoBehaviour
{
    public TMP_InputField nameField;
    public TMP_InputField powerField;
    public TMP_InputField pointsField;
    public TMP_InputField movementField;
    public TMP_InputField weaponSkillField;
    public TMP_InputField ballisticSkilltField;
    public TMP_InputField strenghtField;
    public TMP_InputField toughnessField;
    public TMP_InputField woundsField;
    public TMP_InputField attacksField;
    public TMP_InputField leadershipField;
    public TMP_InputField saveField;
    public TMP_InputField codexField;
    public TMP_Dropdown factionField;
    public TMP_Dropdown battlefieldRoleField;
    public Button submitButton;
    public TextMeshProUGUI displayMessage;
    public TextMeshProUGUI displayMessagePopUp;
    public GameObject popUp;
    public QRCodeGenerator generator; //reference of GameObject in the Scene with the QRCodeGenerator script as component
    public SaveQRCode saver;

    public void callAddUnit()
    {
        StartCoroutine(addNewUnit());
    }

    IEnumerator addNewUnit()
    {
        //just for testing purpose on mobile
        if (nameField.text == "testMobile")
        {
            generator.GetComponent<QRCodeGenerator>().encodeTextToQRCode("1");
            popUp.SetActive(true);
            yield break;
        }
        string url = "http://localhost/AR-TCA/Units/addUnit.php";
        string username = DBManager.username;

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("unitName", nameField.text);
        form.AddField("unitPowerCost", powerField.text);
        form.AddField("unitPointCost", pointsField.text);
        form.AddField("unitMove", movementField.text);
        form.AddField("unitWeaponSkill", weaponSkillField.text);
        form.AddField("unitBallisticSkill", ballisticSkilltField.text);
        form.AddField("unitStrength", strenghtField.text);
        form.AddField("unitToughness", toughnessField.text);
        form.AddField("unitWounds", woundsField.text);
        form.AddField("unitAttacks", attacksField.text);
        form.AddField("unitLeadership", leadershipField.text);
        form.AddField("unitSave", saveField.text);
        form.AddField("codexField", pointsField.text);

        form.AddField("factionName", factionField.captionText.text);
        form.AddField("battlefieldRoleName", battlefieldRoleField.captionText.text);
        form.AddField("userUsername", username);

        //TODO:comment after testing
        // form.AddField("userUsername", "admin");

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
                    displayMessage.text = "";
                    //get index of unitID of php echo 
                    int indexOfID = www.downloadHandler.text.IndexOf("_");
                    //index of _ char +1 = unitID string
                    string unitID = www.downloadHandler.text.Substring(indexOfID + 1);

                    //get Component(script) of referenced gameObject and fire function
                    generator.GetComponent<QRCodeGenerator>().encodeTextToQRCode(unitID);
                    popUp.SetActive(true);
                }

                if (www.downloadHandler.text.Contains("Unit already exists"))
                {
                    displayMessage.text = "Einheit wurde bereits der Datenbank hinzugefuegt!";
                }
            }
        }
    }

    public void verfifyInputs()
    {
        //just for testing purpose on moblie
        // if (nameField.text == "testMobile")
        // {
        //     submitButton.interactable = true;
        // }

        submitButton.interactable = (nameField.text.Length >= 1 &
                                        powerField.text.Length >= 1 &
                                        pointsField.text.Length >= 1 &
                                        movementField.text.Length >= 1 &
                                        weaponSkillField.text.Length >= 1 &
                                        ballisticSkilltField.text.Length >= 1 &
                                        strenghtField.text.Length >= 1 &
                                        toughnessField.text.Length >= 1 &
                                        woundsField.text.Length >= 1 &
                                        attacksField.text.Length >= 1 &
                                        leadershipField.text.Length >= 1 &
                                        saveField.text.Length >= 1 &
                                        codexField.text.Length >= 1 &
                                        !(factionField.captionText.text.Equals("Bitte auswaehlen")) &
                                        !(battlefieldRoleField.captionText.text.Equals("Bitte auswaehlen")));
    }

    public void onClickSave()
    {
        saver.GetComponent<SaveQRCode>().saveQRCodeOnDevice(generator.GetComponent<QRCodeGenerator>().getTexture(), nameField.text);
        displayMessagePopUp.text = "QR Code wurde gespeichert";
    }
}
