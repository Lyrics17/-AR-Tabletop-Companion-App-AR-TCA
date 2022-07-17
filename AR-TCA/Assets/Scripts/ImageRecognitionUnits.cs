using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageRecognitionUnits : MonoBehaviour
{
    //Reference to the ARTrackedImageManager
    private ARTrackedImageManager trackedImageManager;

    public GameObject marker;

    private GameObject spawnedMarker;

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
            //TODO: Add code to handle object transformation according to movement value of unit 
            //instantiate the marker at the tracked image position
            var newMarker  = Instantiate(marker, trackedImage.transform);
            
            //Save the spawned marker
            spawnedMarker = newMarker;

            //Change scale of marker to movement value of unit
            //Scale x = 0.4 equals a radius of 6"
            //use rule of three to calculate the scale of the marker
            //TODO: implement calculation of movement value to x scale -> 
            spawnedMarker.transform.localScale = new Vector3(0.4f, 0.4f, 0.1f);
            // spawnedMarker.transform.localScale = new Vector3(0.533f, 0.533f, 0.1f); -> 8"
        }

        //For each tracked image which is no longer tracked but just for a moment 
        foreach (var trackedImage in eventArgs.updated)
        {
            //Set the spawned marker to active if it is tracked or not
            spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }

        //For each tracked image which is no longer tracked
        //Test what happens if you delete this code -> needs to be here else marker gets "stuck"
        //this isn't the cause for the bug where the scene doesn't show the marker after a scene switch
        foreach (var trackedImage in eventArgs.removed)
        {
            //Destroy the spawned marker
            Destroy(spawnedMarker);
        }
    }
}
