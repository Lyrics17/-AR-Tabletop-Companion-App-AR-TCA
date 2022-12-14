using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class Registration : MonoBehaviour
{
    public TMP_InputField nameField;
    public TMP_InputField passwordField;
    public Button submitButton;
    public TMPro.TextMeshProUGUI infoText;

    //Middleman method to keep the game running during the register process
    public void callRegister()
    {
        StartCoroutine(Register());
    }

    //Connection method to the specific .php file
    IEnumerator Register()
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Users/register.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Users/register.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Users/register.php";

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
                if (www.downloadHandler.text.Contains("0"))
                {
                    DBManager.isRegistered();
                    SceneManager.LoadScene("LoginScene");
                }
                else if (www.downloadHandler.text.Contains("2"))
                {
                    infoText.text = "Username existiert bereits";
                }
            }
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (nameField.text.Length >= 2 & passwordField.text.Length >= 2);
    }
}
