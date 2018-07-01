using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Manager : MonoBehaviour {

    [SerializeField]
    GameObject playerProjectilePrefab;
    [SerializeField]
    GameObject soldierProjectilePrefab;
    [SerializeField]
    GameObject commanderProjectilePrefab;

    GameObject projectilePrefab;

    private void Awake()
    {
        ScreenUtils.Initialize();    
    }

    // Use this for initialization
    void Start () {

        EventManager.AddPlayerShootListener(Shoot);
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void Shoot(Vector3 position, Characters shooter)
    {
        switch(shooter)
        {
            case Characters.Soldier:
                projectilePrefab = soldierProjectilePrefab;
                break;
            case Characters.Commander:
                projectilePrefab = commanderProjectilePrefab;
                break;
            default:
                projectilePrefab = playerProjectilePrefab;
                break;
        }

        GameObject projectile = Instantiate(projectilePrefab, position, Quaternion.identity) as GameObject;
    }
}
