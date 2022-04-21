using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
    public void runApp()
    {
        //Wird die Funktion durch einen Buttonklick aufgerufen wird zunächst der aktuelle buildIndex der Seite geholt und dann um 1 inkrementiert.
        //Dadurch wird die nächste Scene aufgerufen
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void back()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void backToFirst()
    {
        SceneManager.LoadScene("LoginScene");
    }
    public void goToMain()
    {
        SceneManager.LoadScene("MainMenuScene");
    }
}
