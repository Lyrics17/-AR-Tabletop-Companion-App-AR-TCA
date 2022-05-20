using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class Login : MonoBehaviour
{
    public TextMeshProUGUI userUsername;
    public TextMeshProUGUI userPassword;
    public TextMeshProUGUI displayMessage;
    public Button submitButton;

    //Middleman method to keep the game running during the register process
    public void callLogin()
    {
        StartCoroutine(LoginUser());
    }
    IEnumerator LoginUser()
    {
        string url = "http://localhost/AR-TCA/Users/login.php";

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("userUsername", userUsername.text);
        form.AddField("userPassword", userPassword.text);

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
                    DBManager.username = userUsername.text;
                    SceneManager.LoadScene("MainMenuScene");
                }

                if (www.downloadHandler.text.Contains("1"))
                {
                    displayMessage.text = "Der eingegebene Benutzername ist nicht korrekt!";
                }

                if (www.downloadHandler.text.Contains("2"))
                {
                    displayMessage.text = "Das eingegebene Passwort ist nicht korrekt!";
                }
            }
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (userUsername.text.Length >= 2 & userPassword.text.Length >= 2);
    }
}
