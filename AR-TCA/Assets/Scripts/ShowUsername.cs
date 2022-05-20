using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShowUsername : MonoBehaviour
{

    public TextMeshProUGUI usernameDisplay;
    // Start is called before the first frame update
    void Start()
    {
        if (DBManager.loggedIn)
        {
            usernameDisplay.text = "Willkommen " + DBManager.username;
        }
    }
}
