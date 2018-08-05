using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Player : MonoBehaviour {

    // movement support
    Vector2 position = new Vector3();
    BoxCollider2D boxCollider2D;
    Rigidbody2D rb2D;
    float playerHalfWidth;

    // shooting support
    PlayerShoot playerShootEvent = new PlayerShoot();

	// Use this for initialization
	void Start () {

        // movement support
        boxCollider2D = GetComponent<BoxCollider2D>();
        rb2D = GetComponent<Rigidbody2D>();
        playerHalfWidth = boxCollider2D.size.x / 2;

        // shooting support
        EventManager.AddPlayerShootInvoker(this);
        position = transform.position;
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void FixedUpdate()
    {
        float horizontalMovement = Input.GetAxis("Horizontal");
        if(horizontalMovement != 0)
        {
            position = rb2D.position;
            position.x += horizontalMovement * Time.deltaTime * Constants.PlayerSpeed;
            position.x = Clamp(position.x);
            rb2D.MovePosition(position);
        }

        if(Input.GetKeyDown(KeyCode.Space))
        {
            playerShootEvent.Invoke(position, Characters.Player);
            AudioManager.PlayAudio(SFXs.player);
        }
    }

    float Clamp(float xPosition)
    {
        if(xPosition + playerHalfWidth > ScreenUtils.ScreenRight)
        {
            xPosition = ScreenUtils.ScreenRight - playerHalfWidth;
        }
        else if(xPosition - playerHalfWidth < ScreenUtils.ScreenLeft)
        {
            xPosition = ScreenUtils.ScreenLeft + playerHalfWidth;
        }
        return xPosition;
    }


    // event related methods

    public void AddPlayerShootListener(UnityAction<Vector3, Characters> listener)
    {
        playerShootEvent.AddListener(listener);
    }
}
