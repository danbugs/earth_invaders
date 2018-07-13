using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {

    Menus currentMenu;

	// Use this for initialization
	void Start () {
        DontDestroyOnLoad(gameObject);
        EventManager.AddGameOverListeners(Die);
	}
	
	// Update is called once per frame
	void Update () {
        if(SceneManager.GetActiveScene().Equals("MainMenu"))
        {
            currentMenu = Menus.MainMenu;
        }
        else if(SceneManager.GetActiveScene().Equals("Earth Invaders"))
        {
            currentMenu = Menus.EarthInvaders;
        }
        else
        {
            currentMenu = Menus.GameOver;
        }
	}

    public void ClickPlay()
    {
        SceneManager.LoadScene("Earth Invaders");
    }

    void Die(int points)
    {
        SceneManager.LoadScene("GameOver");
    }

}
