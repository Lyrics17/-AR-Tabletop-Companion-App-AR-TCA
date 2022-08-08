using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneSwitcher : MonoBehaviour
{
    public void runApp()
    {
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
    public void goToNewUnit()
    {
        SceneManager.LoadScene("NewUnitScene");
    }
    public void goToChoseTerrain()
    {
        SceneManager.LoadScene("TerrainScene");
    }
    public void goToStartMatch()
    {
        SceneManager.LoadScene("ARScene");
    }
    public void goToArmylists()
    {
        SceneManager.LoadScene("AvailableArmiesScene");
    }
    public void goToCreateArmylist()
    {
        SceneManager.LoadScene("CreateArmylist");
    }
}
