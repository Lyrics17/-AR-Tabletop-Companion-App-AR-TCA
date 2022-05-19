using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;


public class Login : MonoBehaviour
{
    public TextMeshProUGUI userUsername;
    public TextMeshProUGUI userPassword;
    public Button submitButton;

    //Middleman method to keep the game running during the register process
    public void callLogin()
    {
        StartCoroutine(LoginUser());
    }
    IEnumerator LoginUser()
    {
        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("userUsername", userUsername.text);
        form.AddField("userPassword", userPassword.text);

        WWW www = new WWW("http://localhost/AR-TCA/Users/login.php", form);
        //wait till www has a return value and than proceeds with the code
        yield return www;

        if (www.text[0] == '0')
        {
            Debug.Log(www.text);
            DBManager.username = userUsername.text;
            SceneManager.LoadScene("MainMenuScene");
        }
        else
        {
            Debug.Log("Login failed! Error #" + www.text);
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (userUsername.text.Length >= 2 & userPassword.text.Length >= 2);
    }
}
