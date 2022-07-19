using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Networking;
using TMPro;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageRecognitionUnits : MonoBehaviour
{
    //Reference to the ARTrackedImageManager
    private ARTrackedImageManager trackedImageManager;

    //Vars for the Marker Gameobject
    public GameObject marker;

    private GameObject spawnedMarker;

    private double unitMove;
    private string unitName;

    private string nowTrackedImage;

    //Array for Data Containers
    public GameObject[] dataContainers;

    public TextMeshProUGUI[] dataText;
    public TextMeshProUGUI debugLog;
    private bool temp = true;

    private int debugLogIndex = 1;

    private Coroutine coroutineInstatiateMarker;

    private Coroutine coroutineGetUnitData;

    private void Awake()
    {
        //Get the ARTrackedImageManager component at the start of the game
        trackedImageManager = GetComponent<ARTrackedImageManager>();
    }

    private void OnEnable()
    {
        //Attach event handler when tracked image changes
        trackedImageManager.trackedImagesChanged += OnTrackedImagesChanged;
    }

    private void OnDisable()
    {
        //Remove event handler 
        trackedImageManager.trackedImagesChanged -= OnTrackedImagesChanged;
    }

    // TODO: 1 Aktueller stand: Marker & werte werden richtig gespawned und angezeigt. Problem ist aber das die gespawend marker immer active, die werte nicht swichen und ermanchmal assault interccessor als biker ansieht (kann aber am digitalen bildschirm liegen)?!

    // TODO: 2 Aktueller Stand: Missionmarker funktioniert, hide stats funktioniert. Das Cam verwechselt manchmal assault intercessor und biker, guess liegt am display weil captain erkennt es. ES werden NICHT die Werte gewechselt und auch nciht die marker despawned.

    //TODO: 3 Aktueller Stand: Bug mit biker und intercessor liegt am bild/display
    //TODO: 4 Aktueller Stand: Man braucht ein update da sonst einmal getrackte imgs nicht noch mal getracket werden -> eins zu destory hilft nicht 

    //TODO: 5 Aktueller Stand: FML UPDATE wird "permanent getracked" wahrscheinlich wird es jeden frame einmal abgefragt was gerade getrackt wird. 

    //TODO: 6 Aktueller Stand: da eventArgs.updated ein array / liste ist werde ich jetzt ein array / liste machen mit allen geaddeden tracked images. sobald dann ein tracked image getrackt wird,wird die liste / array iteriert und dann bestimmt was es machen soll.

    //TODO: 7 Aktueller Stand:
    /*
    A: Prüfe ob was im bild ist ==trackingstate.tracking
    B2: WENN Ja -> prüfe mittels ref.name um was es sich handelt -> contains Unit etc
    C1: WENN Unit/Terrain bearbeite namen das es für die db passt und starte damit die coroutine. Vlt muss du eine neue coroutine schreiben damit du in dieser auf die getUnitDAta coroutine warten kannst. zum schluss SetActive
    C2: WENN Marker -> setActive
    B2: WENN Nein -> spawne marker setActive false
    */

    // TODO: 8 Aktueller Stand:
    /*
    ODER:
    kick update und destroy einfach den spawnd marker bevor ein neues instatiiert wird.
    */

    
    // TODO: 9 Aktueller Stand:
    /*
    Heraufinden warum coroutine nicht im update getriggert wird richtig
    */


    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        //For each tracked image which is tracked for the first time for once for each image
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            if (debugLogIndex == 3)
            {
                debugLog.text = "";
            }

            //TODO: implement switch logic for marker, unit and terrain images 
            if (trackedImage.referenceImage.name == "Marker")
            {
                if (spawnedMarker != null)
                {
                    spawnedMarker.SetActive(false);
                    Destroy(spawnedMarker);
                }

                spawnedMarker = Instantiate(marker, trackedImage.transform);

                spawnedMarker.transform.localScale = new Vector3(0.2f, 0.2f, 0.1f);

                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + trackedImage.referenceImage.name;
                debugLogIndex++;
            }
            else if (trackedImage.referenceImage.name.Contains("Unit_"))
            {
                unitName = trackedImage.referenceImage.name.Substring(5);

                if (spawnedMarker != null)
                {
                    spawnedMarker.SetActive(false);
                    Destroy(spawnedMarker);
                }

                coroutineInstatiateMarker = StartCoroutine(instantiateMarker(unitName, trackedImage));
                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + unitName;
                debugLogIndex++;
            }
        }

        //The right now tracked image. Is called / updated every frame! Also called when a image is for the first time added and then tracked / updated
        // foreach (ARTrackedImage trackedImage in eventArgs.updated) //-> ist ein array aus alle bis dahin geaddedten images 
        // {
        //     bool isTracked = trackedImage.trackingState == TrackingState.Tracking;
        //    // bool isTracked = trackedImage.trackingState == TrackingState.Tracking; kann man abspeichern und abfragen -> das wird jeden frame gemacht auch wenn nichts im bild ist (update) wird. akt sich aber mit dem adden. Aber isTracked gibt nur was zurück wenn was grad im bild ist -> das stimmt ABER nur für das erste bild was geadded worden ist wtf?!

        //     //ES wird nur das erste geadded image hier getrack kp warum das so ist!!
        //    if (isTracked)
        //    {
        //     debugLog.text = trackedImage.referenceImage.name;
        //    }else
        //    {
        //     debugLog.text = trackedImage.referenceImage.name;
        //    }

        //     debugLog.text += " " + isTracked;

        //     // if (nowTrackedImage != lastTrackedImage) //!= trackedImage.referenceImage.name wird immer wieder ausgelöst. weils alle in der liste abfragt und das dann immer true ergibt
        //     // //geht rein wenn lasttracked image bsp guard(added) ist und cap(updated) ist 
        //     // //geht aber auch rein wenn cap(updated) und marker(added ) ungleich ist 
        //     // {
        //     //     if (trackedImage.referenceImage.name.Contains("Unit_"))
        //     //     {
        //     //         spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);

        //     //         unitName = trackedImage.referenceImage.name.Substring(5);//diese referenz ist langsam
        //     //         nowTrackedImage = trackedImage.referenceImage.name; //weil sonst das if immer true ist 
        //     //         temp = true;
        //     //         coroutineGetUnitData = StartCoroutine(GetUnitData(unitName));
        //     //     }
        //     //     else if (trackedImage.referenceImage.name.Contains("Terrain_"))
        //     //     {
        //     //         spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);

        //     //         unitName = trackedImage.referenceImage.name.Substring(8);
        //     //         temp = true;
        //     //         nowTrackedImage = trackedImage.referenceImage.name;
        //     //     }
        //     //     else //case if the image is the marker 
        //     //     {
        //     //         spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);

        //     //         nowTrackedImage = "Marker";
        //     //         temp = true;
        //     //     }

        //     //     while (temp)
        //     //     {
        //     //         debugLog.text += "\nEs wird jetzt " + nowTrackedImage + " getrackt";
        //     //         temp = false;
        //     //     }
        //     // }
        // }

        //For each tracked image which is no longer tracked
        //Test what happens if you delete this code -> needs to be here else marker gets "stuck"
        //this isn't the cause for the bug where the scene doesn't show the marker after a scene switch
        foreach (var trackedImage in eventArgs.removed)
        {
            //Destroy the spawned marker -> duno when this happens
            Destroy(spawnedMarker);
            debugLog.text = "spawnedMarker destroyed!!!!!!!!!";
        }
    }

    IEnumerator instantiateMarker(string unitName, ARTrackedImage trackedImage)
    {
        yield return StartCoroutine(GetUnitData(unitName));

        spawnedMarker = Instantiate(marker, trackedImage.transform);

        //Change scale of marker to movement value of unit
        //Scale x = 0.4 equals a radius of 6"
        //use rule of three to calculate the scale of the marker
        float newScale = (0.4f * (float)unitMove / 6);

        spawnedMarker.transform.localScale = new Vector3(newScale, newScale, 0.1f);
        // spawnedMarker.transform.localScale = new Vector3(0.533f, 0.533f, 0.1f); -> 8"
        enableDataContainers();
    }

    IEnumerator GetUnitData(string unitName)
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Units/addUnit.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Units/addUnit.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Units/getUnit.php";

        WWWForm form = new WWWForm();
        form.AddField("unitName", unitName);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("!"); //finds the first "!" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 2); //cuts the string from the first "! + 2" to the end

                    string[] responseArray = response.Split('_');

                    unitMove = System.Convert.ToDouble(responseArray[1]);

                    //easisiest way to safe responseArray data into the dataContainers array at the right index 
                    int index = 0;

                    //Save Unit Data into Array for frontend display
                    //Starts with index 3 because the first 3 values are Movement_, unitMove and _WeaponSkill_
                    for (int i = 3; i < responseArray.Length; i += 2)
                    {
                        //dataText index needs to start at 0!
                        dataText[index].text = responseArray[i];
                        index++;
                    }
                }
            }
        }

    }

    private void enableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(true);
        }
    }

    public void disableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(false);
        }
        resetDataText();
    }

    private void resetDataText()
    {
        foreach (TextMeshProUGUI dataText in dataText)
        {
            dataText.text = "";
        }
    }
}
