using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShowIsRegistered : MonoBehaviour
{
    public TextMeshProUGUI messageDisplay;
    // Start is called before the first frame update
    void Start()
    {
        if (DBManager.registered)
        {
            messageDisplay.text = "Die Registrierung war erfolgreich!";
        }
    }
}
