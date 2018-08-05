using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour {

    Menus currentMenu;
    ChangeLevel changeLevelEvent = new ChangeLevel();
    ResetPlayerHealth resetPlayerHealthEvent = new ResetPlayerHealth();
    ResumeGameplay resumeGameplayEvent = new ResumeGameplay();

    private void Awake()
    {
        if(GameObject.FindGameObjectsWithTag("MenuManager").Length > 1) // we already have a menu manager
        {
            GameObject previousMenuManager = GameObject.FindGameObjectsWithTag("MenuManager")[0];
            Destroy(previousMenuManager);
        }
    }


    // Use this for initialization
    void Start () {
        DontDestroyOnLoad(gameObject);
        EventManager.AddGameOverListeners(Die);
        EventManager.AddChangeLevelInvokers(this);
        EventManager.AddAllEnemiesDeadListeners(GoToNextLevel);
        EventManager.AddGameWinListeners(GoToWin);
        EventManager.AddResetPlayerHealthInvokers(this);
        EventManager.AddResumeGameplayInvokers(this);
        UpdateScene();
	}

    private void Update()
    {
    }

    public void ClickPlay()
    {
        UpdateScene();
        Time.timeScale = 1;
        HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
        SceneManager.LoadScene("Level1");
        AudioManager.PlayAudio(SFXs.click);
        UpdateScene();
    }

    public void GoHelp()
    {
        UpdateScene();
        SceneManager.LoadScene("HelpMenu");
        AudioManager.PlayAudio(SFXs.click);
        UpdateScene();
    }

    public void GoBack()
    {
        UpdateScene();
        SceneManager.LoadScene("MainMenu");
        AudioManager.PlayAudio(SFXs.click);
        UpdateScene();
    }

    public void GoToLvls()
    {
        UpdateScene();
        SceneManager.LoadScene("Levels");
        AudioManager.PlayAudio(SFXs.click);
        UpdateScene();
    }

    public void GoToLvl1()
    {
        UpdateScene();
        Time.timeScale = 1;
        HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
        AudioManager.PlayAudio(SFXs.click);
        SceneManager.LoadScene("Level1");
        UpdateScene();
    }

    public void GoToLvl2()
    {
        UpdateScene();
        Time.timeScale = 1;
        HUD.PlayerHealth = Constants.MaxPlayerHealth; // fix this with reserPlayerHealth event later (resetPlayerHealthEvent.Invoke();)
        AudioManager.PlayAudio(SFXs.click);
        SceneManager.LoadScene("Level2");
        UpdateScene();
    }

    public void GoToMainMenu()
    {
        UpdateScene();
        SceneManager.LoadScene("MainMenu");
        AudioManager.PlayAudio(SFXs.click);
        UpdateScene();
    }

    public void Resume()
    {
        GameObject.FindGameObjectWithTag("Pause").SetActive(false);
        AudioManager.PlayAudio(SFXs.click);
        Time.timeScale = 1;
    }

    void GoToNextLevel()
    {
        UpdateScene();
        changeLevelEvent.Invoke();
        SceneManager.LoadScene("Level2");
        AudioManager.PlayAudio(SFXs.passedLevel);
        UpdateScene();
    }

    void GoToWin()
    {
        UpdateScene();
        SceneManager.LoadScene("GameWin");
        AudioManager.PlayAudio(SFXs.gameWin);
        UpdateScene();
    }


    void Die(int points)
    {
        UpdateScene();
        SceneManager.LoadScene("GameOver");
        AudioManager.PlayAudio(SFXs.gameOver);
        UpdateScene();
    }

    void UpdateScene()
    {
        if (SceneManager.GetActiveScene().name.Equals("MainMenu"))
        {
            currentMenu = Menus.MainMenu;
        }
        else if (SceneManager.GetActiveScene().name.Equals("Level1"))
        {
            currentMenu = Menus.Level1;
        }
        else if (SceneManager.GetActiveScene().name.Equals("GameOver"))
        {
            currentMenu = Menus.GameOver;
        }
        else if (SceneManager.GetActiveScene().name.Equals("HelpMenu"))
        {
            currentMenu = Menus.HelpMenu;
        }
        else if (SceneManager.GetActiveScene().name.Equals("Level2"))
        {
            currentMenu = Menus.Level2;
        }
        else if(SceneManager.GetActiveScene().name.Equals("GameWin"))
        {
            currentMenu = Menus.GameWin;
        }
        else if (SceneManager.GetActiveScene().name.Equals("Levels"))
        {
            currentMenu = Menus.Levels;
        }
    }

    // event related methods
    public void AddChangeLevelListeners(UnityAction listener)
    {
        changeLevelEvent.AddListener(listener);        
    }

    public void AddResetPlayerHealthListener(UnityAction listener)
    {
        resetPlayerHealthEvent.AddListener(listener);
    }

    public void AddResumeGameplayListener(UnityAction listener)
    {
        resumeGameplayEvent.AddListener(listener);
    }


}
