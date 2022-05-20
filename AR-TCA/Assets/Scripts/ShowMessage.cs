using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ShowMessage : MonoBehaviour
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

    private void Update()
    {
        if (DBManager.passwordReset)
        {
            messageDisplay.text ="Passwort wurde erfolgreich geaendert!";
        }
    }
}
