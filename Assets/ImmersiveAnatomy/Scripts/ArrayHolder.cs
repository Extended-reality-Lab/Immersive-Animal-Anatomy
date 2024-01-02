using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class ArrayHolder : MonoBehaviour
{
    public GameObject[] SkeletonArray;
    public GameObject[] OrganArray;
    public GameObject[] SkinArray;

    private void Start()
    {
        // Check if the current scene is the Lobby Scene
        if (SceneManager.GetActiveScene().name == "Lobby")
        {
            SkeletonArray.Initialize();
            OrganArray.Initialize();
            SkinArray.Initialize();
            // Find all children of the Skeleton object
            SkeletonArray = GameObject.Find("Skeleton").GetComponentsInChildren<GameObject>();
            // Find all children of the Organ object
            OrganArray = GameObject.Find("Organ").GetComponentsInChildren<GameObject>();
            // Find all children of the Skin object
            SkinArray = GameObject.Find("Skin").GetComponentsInChildren<GameObject>();
        }
    }
}

