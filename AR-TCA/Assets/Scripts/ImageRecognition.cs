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

    //In this dictionary the instantiated markers and the image.name they are associated with are stored
    private readonly Dictionary<string, GameObject> instantiatedMarkers = new Dictionary<string, GameObject>();

    //Utility vars
    private double unitMove;
    private string unitName;
    private bool dataContainersVisible = false;

    //Array for Data Containers
    public GameObject[] dataContainers;

    // TODO: Delete after completeing the test
    public TextMeshProUGUI[] dataText;
    public TextMeshProUGUI debugLog;
    private int debugLogIndex = 1;

    //Reference for the coroutines used in this script
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

    // TODO: Idee 2 (implementiert):
    /*
    kick update und destroy einfach den spawnd marker bevor ein neues instatiiert wird.
    Ergebnis:
        Wenn ein Image erkannt wird, wird der Marker angezeigt. Wenn das Image aus dem Bild geht und wieder auftaucht wird die Position des Markers wieder auf die Position des Images gesetzt. Wenn das Images eine Weile ca. halbe Min nicht getracket wird, wird der Marker wieder "neu" eingeblendet (schwebt nicht im raum sondern tauch neu auf dem Image auf). Geht man zu schnell auf das Image wieder, sieht man den falsch plazierten Marker welcher dann aber wieder richtig plaziert wird. Wird ein neues Image erkannt wird der alte Marker gelöscht und der neue erstellt und nimmt seinen platz ein (Es gelten die gleichen Regeln wie oben). Wird wieder zum davor getracketen image gewechselt wird dieses nicht angezeigt / aktiviert.

        TODO: 1st: teste was passiert wenn jetzt nur der standard code von update hinzugefügt wird
        Ergebnis: 
            Wenn ein Image erkannt wird, wird der Marker angezeigt. Wenn das Image aus dem Bild geht und wieder auftaucht wird die Position des Markers wieder auf die Position des Images gesetzt. Wenn ein neues Image getracket wird, wird das inkonsistent gespanwed, hängt wahrscheinlich mit den frames zuammen. Und wenn es klappt wird der alte nicht mehr angezeigt. Kann sein das es besser klappt wenn jedes image sein eigenes prefab hätte.

            TODO: Wenn die 2nd idee nicht funktioniert mach eine dictionary und speicher jede instanz des spawned markers mit dem dazugehörigen namen und lass die im updated durchgehen -> wie im video.
            Ergebnis:
                DER SHIT FUNKT!!!!!!!!!!! HAHAHHA sooo geil!!!! man kann jetzt zwischen images wechseln und der dementsprechende marker wird wieder angezeigt hahahahahahahaha

                TODO: Heraufinden warum coroutine nicht im update getriggert wird richtig

                Ergebnis von einer neuen coroutine die im update abgefeuert wird. in dieser wird 5sek gewartet und dann die getunitData coroutine abgefeuert.:
                    Es geht nicht, getUpdateData wird erst aufgerufen wenn das ding nicht mehr getracked wird. bis dahin ist der name nciht mehr sicht bar. FUCK IT.

    
    Akuteller Stand 21.07.2022: Unit und Maker gehn, man bekommt werte aus der db und die marker werden richtig instanziiert. Das einzige was nicht geht ist dsa wenn man von einem image mit db zu einem neuen image mit db, wieder zurück geht im da nochmal die werte zu holen -> es ist nicht möglich mit einer coroutine das zu lösen 
        Idee: speicher die werte in ein array ab und rufe die auf quasi wie du es mit der dic machst aber eig kein bock mal sehen
    */

    private void OnTrackedImagesChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        //For each tracked image which is tracked for the first time for once for each image
        foreach (ARTrackedImage trackedImage in eventArgs.added)
        {
            //TODO: implement switch logic for marker, unit and terrain images 
            if (trackedImage.referenceImage.name == "Marker")
            {

                disableDataContainers();
                dataContainersVisible = false;

                spawnedMarker = Instantiate(marker, trackedImage.transform);

                spawnedMarker.transform.localScale = new Vector3(0.2f, 0.2f, 0.1f);

                instantiatedMarkers.Add(trackedImage.referenceImage.name, spawnedMarker);

                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + trackedImage.referenceImage.name;
                debugLogIndex++;
            }
            else if (trackedImage.referenceImage.name.Contains("Unit_"))
            {
                unitName = trackedImage.referenceImage.name.Substring(5);

                coroutineInstatiateMarker = StartCoroutine(instantiateMarker(unitName, trackedImage));
                debugLog.text += "\n" + debugLogIndex.ToString() + ": " + unitName;
                debugLogIndex++;
            }
        }

        //The right now tracked image. Is called / updated every frame! Also called when a image is for the first time added and then tracked / updated
        foreach (ARTrackedImage trackedImage in eventArgs.updated) //-> ist ein array aus alle bis dahin geaddedten images 
        {
            instantiatedMarkers[trackedImage.referenceImage.name].SetActive(trackedImage.trackingState == TrackingState.Tracking);
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

        instantiatedMarkers.Add(trackedImage.referenceImage.name, spawnedMarker);

        enableDataContainers();
        dataContainersVisible = true;
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

    private void disableDataContainers()
    {
        foreach (GameObject dataContainer in dataContainers)
        {
            dataContainer.SetActive(false);
        }
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

}
