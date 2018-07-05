using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class SceneHandler : MonoBehaviour {

    bool gameFinished = false;

	// Use this for initialization
	void Start () {
        EventManager.AddGameOverListeners(GoToGameOver);
        DontDestroyOnLoad(gameObject);
	}
	
	// Update is called once per frame
	void Update () {
        if(HUD.PlayerHealth <= 0 && !gameFinished)
        {
            SceneManager.LoadScene("GameOver");
            gameFinished = true;
        }
	}

    void GoToGameOver(int unused)
    {
        print("Should fix this");
    }
}
