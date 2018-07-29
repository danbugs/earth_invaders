using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Wall : MonoBehaviour {

    BoxCollider2D boxCollider2D;
    Rigidbody2D rb2d;
    HitWall hitWallEvent = new HitWall();

	// Use this for initialization
	void Start () {
        
        boxCollider2D = GetComponent<BoxCollider2D>();
        rb2d = GetComponent<Rigidbody2D>();
        EventManager.AddHitWallInvokers(this);
	}

    private void OnCollisionEnter2D(Collision2D collision)
    {
        hitWallEvent.Invoke();
    }

    public void AddHitWallListener(UnityAction listener)
    {
        hitWallEvent.AddListener(listener);
    }


}
