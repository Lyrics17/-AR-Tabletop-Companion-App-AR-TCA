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
    public Button submitButton;

    public void callAddUnit()
    {
        StartCoroutine(addNewUnit());
    }

    IEnumerator addNewUnit()
    {
        string url = "http://localhost/AR-TCA/Units/addUnit.php";

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

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            //wait till www has a return value and than proceeds with the code
            yield return www.SendWebRequest();

            //only checks for "real" errors! exist(); in php dont count
            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else //TODO: Add success & error cases
            {
                Debug.Log(www.downloadHandler.text);
                if (www.downloadHandler.text.Contains("0"))
                {

                }

                if (www.downloadHandler.text.Contains("1"))
                {

                }
            }
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (nameField.text.Length >= 2 &
                                        powerField.text.Length >= 2 &
                                        pointsField.text.Length >= 2 &
                                        movementField.text.Length >= 2 &
                                        weaponSkillField.text.Length >= 2 &
                                        ballisticSkilltField.text.Length >= 2 &
                                        strenghtField.text.Length >= 2 &
                                        toughnessField.text.Length >= 2 &
                                        woundsField.text.Length >= 2 &
                                        attacksField.text.Length >= 2 &
                                        leadershipField.text.Length >= 2 &
                                        saveField.text.Length >= 2 &
                                        pointsField.text.Length >= 2);
    }
}
