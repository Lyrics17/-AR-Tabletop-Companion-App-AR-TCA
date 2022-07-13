using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARTrackedImageManager))]
public class ImageRecognition : MonoBehaviour
{
    //Reference to the ARTrackedImageManager
    private ARTrackedImageManager trackedImageManager;

    public GameObject marker;

    GameObject spawnedMarker;

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
        }

        //For each tracked image which is no longer tracked but just for a moment 
        foreach (var trackedImage in eventArgs.updated)
        {
            //Set the spawned marker to active if it is tracked or not
            spawnedMarker.SetActive(trackedImage.trackingState == TrackingState.Tracking);
        }

        //For each tracked image which is no longer tracked
        foreach (var trackedImage in eventArgs.removed)
        {
            //Destroy the spawned marker
            Destroy(spawnedMarker);
        }
    }
}
