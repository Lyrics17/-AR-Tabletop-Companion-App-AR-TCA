using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.Networking;
using TMPro;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageRecognition : MonoBehaviour
{
    //Reference to the ARTrackedImageManager
    private ARTrackedImageManager trackedImageManager;

    //Vars for the Marker Gameobject
    public GameObject marker;
    private GameObject spawnedMarker;

    //This dictionary stores the instantiated markers and the image.name to which they are assigned
    private readonly Dictionary<string, GameObject> instantiatedMarkers = new Dictionary<string, GameObject>();

    //Utility vars
    private double unitMove;

    private bool dataContainersVisible = false;
    private bool terrainFieldsVisible = false;

    //Frontend vars
    public GameObject[] dataContainers;
    public TextMeshProUGUI[] dataText;
    public GameObject terrainCategory;
    public GameObject terrainAttributes;
    public TextMeshProUGUI terrainCategoryField;
    public TextMeshProUGUI terrainAttributesField;

    // TODO: Delete after completeing the test
    public TextMeshProUGUI debugLog;
    private int debugLogIndex = 1;

    //Reference for the coroutines used in this script
    private Coroutine coroutineInstatiateMarker;
    private Coroutine coroutineGetUnitData;
    private Coroutine coroutineGetTerrainData;

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
        //For each referenced image which is tracked for the first time. Just happens once for each image
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            if (trackedImage.referenceImage.name == "Marker")
            {

                disableDataContainers();
                disableTerrainFields();

                spawnedMarker = Instantiate(marker, trackedImage.transform);

                spawnedMarker.transform.localScale = new Vector3(0.2f, 0.2f, 0.1f); // == 3"

                instantiatedMarkers.Add(trackedImage.referenceImage.name, spawnedMarker);

                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + trackedImage.referenceImage.name;
                debugLogIndex++;
            }
            else if (trackedImage.referenceImage.name.Contains("Unit_"))
            {
                string unitName = trackedImage.referenceImage.name.Substring(5);

                coroutineInstatiateMarker = StartCoroutine(instantiateMarker(unitName, trackedImage));

                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + unitName;
                debugLogIndex++;
            }
            else if (trackedImage.referenceImage.name.Contains("Terrain_"))
            {
                string terrainPiece = trackedImage.referenceImage.name.Substring(8);

                coroutineGetTerrainData = StartCoroutine(getTerrainData(terrainPiece));

                debugLog.text += "\nTerrainPiece: " + terrainPiece;
            }
        }

        //A Image is updated when it is added, when it is again tracked. This happens every frame.
        foreach (ARTrackedImage trackedImage in eventArgs.updated) //A list of all added images which are again in the scene/tracked
        {
            instantiatedMarkers[trackedImage.referenceImage.name].SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }
    }

    //instantiates a marker for a unit with the movement value of the unit and gets the unit data in another coroutine
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

        instantiatedMarkers.Add(trackedImage.referenceImage.name, spawnedMarker);

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

    IEnumerator getTerrainData(string terrainPiece)
    {
        //Webhost connection
        // string url = "https://ar-tca.000webhostapp.com/AR-TCA/Terrain/getTerrain.php";
        //Localhost connection
        // string url = "http://localhost/AR-TCA/Terrain/getTerrain.php";
        //Local connection with fixed ip
        string url = "192.168.178.33/AR-TCA/Terrain/getTerrain.php";

        WWWForm form = new WWWForm();

        form.AddField("terrainPiece", terrainPiece);

        using (UnityWebRequest www = UnityWebRequest.Post(url, form))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                int indexOfString = www.downloadHandler.text.IndexOf("!"); //finds the first "!" in the string
                string response = www.downloadHandler.text.Substring(indexOfString + 2); //cuts the string from the first "! + 2" to the end

                string[] responseArray = response.Split('_'); //splits the string at the "_" character
                terrainCategoryField.text = responseArray[1];
                terrainAttributesField.text = responseArray[3];

                enableTerrainFields();
            }
        }
    }

    private void enableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(true);
        }
        dataContainersVisible = true;
    }

    public void disableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(false);
        }
        dataContainersVisible = false;
    }

    public void toggleDataContainers()
    {
        if (dataContainersVisible)
        {
            disableDataContainers();
            dataContainersVisible = false;
        }
        else
        {
            enableDataContainers();
            dataContainersVisible = true;
        }
    }

    private void enableTerrainFields()
    {
        terrainCategory.gameObject.SetActive(true);
        terrainAttributes.gameObject.SetActive(true);
        terrainFieldsVisible = true;
    }

    public void disableTerrainFields()
    {
        terrainCategory.gameObject.SetActive(false);
        terrainAttributes.gameObject.SetActive(false);
        terrainFieldsVisible = false;
    }

    public void toggleTerrainFields()
    {
        if (terrainFieldsVisible)
        {
            disableTerrainFields();
            terrainFieldsVisible = false;
        }
        else
        {
            enableTerrainFields();
            terrainFieldsVisible = true;
        }
    }
}
