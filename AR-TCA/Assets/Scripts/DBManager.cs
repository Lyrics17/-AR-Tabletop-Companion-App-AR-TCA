using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class DBManager
{
    public static string username;

    //returns null if username = null --> no user is logged in
    public static bool loggedIn
    {
        get { return username != null; }
    }

    public static void logOut()
    {
        username = null;
    }
}
