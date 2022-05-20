using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DBManager
{
    public static string username;
    public static bool registered = false;
    public static bool passwordReset = false;

    //returns null if username = null --> no user is logged in
    public static bool loggedIn
    {
        get { return username != null; }
    }

    public static void logOut()
    {
        username = null;
    }

    public static bool isRegistered()
    {
        return registered = true;
    }
    public static bool passwordResetWasSuccessful()
    {
        return passwordReset = true;
    }
}
