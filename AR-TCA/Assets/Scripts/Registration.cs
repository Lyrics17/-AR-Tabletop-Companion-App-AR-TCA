using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;


public class Registration : MonoBehaviour
{
    public TextMeshProUGUI nameField;
    public TextMeshProUGUI passwordField;
    public Button submitButton;

    //Middleman method to keep the game running during the register process
    public void callRegister()
    {
        StartCoroutine(Register());
    }

    //Connection method to the specific .php file
    IEnumerator Register()
    {

        WWWForm form = new WWWForm();
        //Imported! fieldname = db fieldname
        form.AddField("userUsername", nameField.text);
        form.AddField("userPassword", passwordField.text);

        WWW www = new WWW("http://localhost/AR-TCA/users/register.php", form);
        //wait till www has a return value and than proceeds with the code
        yield return www;

        if (www.text == "0")
        {
            Debug.Log("User created successfully");
            SceneManager.LoadScene("LoginScene");
        }
        else
        {
            Debug.Log("User creation failed. Error:" + www.text);
        }
    }

    public void verfifyInputs()
    {
        submitButton.interactable = (nameField.text.Length >= 1 && passwordField.text.Length >= 1);
    }
}
