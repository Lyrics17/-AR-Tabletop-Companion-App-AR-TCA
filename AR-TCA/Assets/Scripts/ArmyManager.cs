
using System.Collections;
public static class ArmyManager
{
    public static string selectedFaction; //is used to store the selected faction in the faction dropdown in the available armies scene to pass it to the army builder scene
    public static ArrayList selectedUnits = new ArrayList(); //is used to store the selected units in the units dropdown in the army builder scene to pass it to the army builder scene
    public static string powerCost;
    public static string pointsCost;
}
