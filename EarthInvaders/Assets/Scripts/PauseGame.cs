using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseGame : MonoBehaviour {

    bool gamePaused = false;

    [SerializeField]
    GameObject pauseMenu;

	// Use this for initialization
	void Start () {
        EventManager.AddResumeGamplayListeners(Unpause);
	}
	
	// Update is called once per frame
	void Update () {
        if(Input.GetKeyDown(KeyCode.Escape) && !gamePaused)
        {
            Pause();
        }
        else if(Input.GetKeyDown(KeyCode.Escape) && gamePaused)
        {
            Unpause();
        }

        if(pauseMenu.active)
        {
            gamePaused = true;
        }
        else
        {
            gamePaused = false;
        }
		
	}

    void Pause()
    {
        pauseMenu.SetActive(true);
        Time.timeScale = 0;
    }

    void Unpause()
    {
        pauseMenu.SetActive(false);
        Time.timeScale = 1;
    }


}
