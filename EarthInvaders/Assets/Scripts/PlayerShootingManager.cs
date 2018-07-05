using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShootingManager : MonoBehaviour {

    [SerializeField]
    GameObject playerProjectilePrefab;
    Vector3 playerPosition = new Vector3();


    GameObject projectilePrefab;

    private void Awake()
    {
        ScreenUtils.Initialize();    
    }

    // Use this for initialization
    void Start () {

        EventManager.AddPlayerShootListener(PlayerShooting);
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void PlayerShooting(Vector3 position, Characters unused)
    {
        GameObject projectile = Instantiate(playerProjectilePrefab, position, Quaternion.identity) as GameObject;
    }


}
