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

    //TODO: Test
    // private bool waitingForDB = true;

    private string unitMove;
    
    //Array for Data Containers
    public GameObject[] dataContainers;

    public TextMeshProUGUI[] dataText;

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

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        //For each tracked image which is tracked for the first time
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            //instantiate the marker at the tracked image position
            var newMarker = Instantiate(marker, trackedImage.transform); 
            callGetUnitData(trackedImage.referenceImage.name);
            
            
            // TODO:Check if this needs a await statement -> YES it needs it
            // while (waitingForDB)
            // {
            // }

            //Save the spawned marker
            spawnedMarker = newMarker;

            //Change scale of marker to movement value of unit
            //Scale x = 0.4 equals a radius of 6"
            //use rule of three to calculate the scale of the marker
            float newScale = (0.4f * (float)System.Convert.ToDouble(unitMove)/6);

            spawnedMarker.transform.localScale = new Vector3(newScale, newScale, 0.1f);
            // spawnedMarker.transform.localScale = new Vector3(0.533f, 0.533f, 0.1f); -> 8"
        }

        //For each tracked image which is no longer tracked but just for a moment 
        foreach (var trackedImage in eventArgs.updated)
        {
            // TODO: Add code to again call getUnitData() and set the popUps again active
            //Set the spawned marker to active if it is tracked or not
            spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }

        //For each tracked image which is no longer tracked
        //Test what happens if you delete this code -> needs to be here else marker gets "stuck"
        //this isn't the cause for the bug where the scene doesn't show the marker after a scene switch
        foreach (var trackedImage in eventArgs.removed)
        {
            // TODO: Add code to empty popUps after marker is removed 
            //Destroy the spawned marker
            Destroy(spawnedMarker);
        }
    }

    public void callGetUnitData(string unitName)
    {
        StartCoroutine(GetUnitData(unitName));
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

                    //Save Unit Data into Array for frontend display
                    //Starts with index 3 because the first 3 values are Movement_, unitMove and _WeaponSkill_
                    for (int i = 3; i < responseArray.Length; i += 2)
                    {
                        dataText[i].text = responseArray[i];
                    }

                    // waitingForDB = false;
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

    private void disableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(false);
        }
    }

    private void resetDataText()
    {
        foreach (TextMeshProUGUI dataText in dataText)
        {
            dataText.text = "";
        }
    }
}
