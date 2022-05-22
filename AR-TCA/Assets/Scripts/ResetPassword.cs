using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class ResetPassword : MonoBehaviour
{
    public TMP_InputField nameField;
    public TMP_InputField passwordField;
    public TextMeshProUGUI displayMessage;
    public Button submitButton;
    public GameObject popUp;
    //Middleman method to keep the game running during the register process
    public void callReset()
    {
        StartCoroutine(resetPassword());
    }

    IEnumerator resetPassword()
    {
        string url = "http://localhost/AR-TCA/Users/resetPassword.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("userUsername", nameField.text);
        form.AddField("userPassword", passwordField.text);

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
                    DBManager.passwordResetWasSuccessful();
                    popUp.SetActive(false);
                }

                if (www.downloadHandler.text.Contains("1"))
                {
                    displayMessage.text = "Der eingegebene Benutzername ist nicht korrekt!";
                }
            }
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (nameField.text.Length >= 2 & passwordField.text.Length >= 2);
    }
}
