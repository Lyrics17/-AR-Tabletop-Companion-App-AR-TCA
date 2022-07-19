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
    private int counter = 0;

    private string nameOfTrackedImage;

    private string nameOfLastTrackedImage;

    //Array for Data Containers
    public GameObject[] dataContainers;

    public TextMeshProUGUI[] dataText;
    public TextMeshProUGUI debugLog;

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


    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        //For each tracked image which is tracked for the first time for once for each image
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            //TODO: implement switch logic for marker, unit and terrain images 
            if (trackedImage.referenceImage.name == "Marker")
            {
                nameOfLastTrackedImage = trackedImage.referenceImage.name;
                spawnedMarker = Instantiate(marker, trackedImage.transform);

                spawnedMarker.transform.localScale = new Vector3(0.2f, 0.2f, 0.1f);

                debugLog.text += debugLogIndex.ToString() + ": " + trackedImage.referenceImage.name;
                debugLogIndex++;
            }
            else
            {
                nameOfLastTrackedImage = trackedImage.referenceImage.name;
                coroutineInstatiateMarker = StartCoroutine(instantiateMarker(trackedImage.referenceImage.name, trackedImage));
                debugLog.text += debugLogIndex.ToString() + ": " + trackedImage.referenceImage.name;
                debugLogIndex++;
            }

            // unitName = trackedImage.referenceImage.name;
        }

        //TODO: Idee namen des zuletzt getrackten/visible images speichern, erst corotine laufen lassen wenn neues imgae sichtbar ist

        //The right now tracked image. Is called / updated every frame!
        foreach (var trackedImage in eventArgs.updated)
        {

            spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);
            nameOfTrackedImage = trackedImage.referenceImage.name;
            
            if (nameOfTrackedImage != nameOfLastTrackedImage)
            {
                coroutineGetUnitData = StartCoroutine(GetUnitData(trackedImage.referenceImage.name));
                debugLog.text += "\n Es wird jetzt " + trackedImage.referenceImage.name + " getrackt";
            }
            // TODO: Add code to again call getUnitData() and set the popUps again active
            //Set the spawned marker to active if it is tracked or not

            // if (trackedImage.trackingState == TrackingState.Tracking)
            // {
            //     // spawnedMarker.SetActive(true);
            //     // coroutineGetUnitData = StartCoroutine(GetUnitData(trackedImage.referenceImage.name));
            //     // enableDataContainers();
            // }else
            // {
            //     Destroy(spawnedMarker);
            //     disableDataContainers();
            //     resetDataText();
            // }

            // spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);
            // coroutineGetUnitData = StartCoroutine(GetUnitData(spawnedMarker.name));

            //This causes that the first tracked image marker is not deactivated 
            // if (trackedImage.trackingState == TrackingState.Tracking)
            // {
            //     spawnedMarker.SetActive(true);
            //     // coroutineGetUnitData = StartCoroutine(GetUnitData(spawnedMarker.name));
            // }
            // else
            // {
            //     spawnedMarker.SetActive(false);
            // }

            // TODO: IDEE: morgen debug log machen und schauen wann trackingState == TrackingState.Tracking true und wann false ist und welches bild getracked wird
            //TODO: IDEE: update rausschmeißen nur added wenn spawnedMarker =! null instatiate Marker sonst destroy 

        // TODO: morgen noch mal lesen was es bedeutet wenn ein image in der liste updated ist 

            //this causes to show the marker which is tracked in this frame 
            // spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);

            //gets called immediately after image is tracked
            // resetDataText();
        }

        //For each tracked image which is no longer tracked
        //Test what happens if you delete this code -> needs to be here else marker gets "stuck"
        //this isn't the cause for the bug where the scene doesn't show the marker after a scene switch
        // foreach (var trackedImage in eventArgs.removed)
        // {
        //     //Destroy the spawned marker -> duno when this happens
        //     Destroy(spawnedMarker);
        // }
    }

    IEnumerator instantiateMarker(string unitName, ARTrackedImage trackedImage)
    {
        yield return StartCoroutine(GetUnitData(unitName));

        // if (spawnedMarker != null)
        // {
        //     Destroy(spawnedMarker);
        // }

        spawnedMarker = Instantiate(marker, trackedImage.transform);

        //Change scale of marker to movement value of unit
        //Scale x = 0.4 equals a radius of 6"
        //use rule of three to calculate the scale of the marker
        float newScale = (0.4f * (float)unitMove / 6);

        // debugLog.text = "unitMove " + unitMove;
        // debugLog.text += "\n";
        // debugLog.text += "New Scale: " + newScale;

        spawnedMarker.transform.localScale = new Vector3(newScale, newScale, 0.1f);
        // spawnedMarker.transform.localScale = new Vector3(0.533f, 0.533f, 0.1f); -> 8"
        enableDataContainers();

        // yield return spawnedMarker;
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
                // debugLog.text = www.downloadHandler.text;
                if (www.downloadHandler.text.Contains("0"))
                {
                    int indexOfString = www.downloadHandler.text.IndexOf("!"); //finds the first "!" in the string
                    string response = www.downloadHandler.text.Substring(indexOfString + 2); //cuts the string from the first "! + 2" to the end

                    string[] responseArray = response.Split('_');

                    unitMove = System.Convert.ToDouble(responseArray[1]);

                    // debugLog.text += "\n Move from DB";
                    // debugLog.text += unitMove.ToString();

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
