using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class Enemy : MonoBehaviour {

    protected int damage;
    protected int points;
    protected int id;

    Rigidbody2D rb2D;
    BoxCollider2D boxCollider2D;

    EnemyDead enemyDeadEvent = new EnemyDead();

    public Vector2 Position
    {
        get
        {
            Vector2 position2D = new Vector2();
            position2D.x = transform.position.x;
            position2D.y = transform.position.y;
            return position2D;
        }
    }

    public int ID
    {
        get { return id; }
        set { id = value; }
    }

    // Use this for initialization
    protected virtual void Start () {
        rb2D = GetComponent<Rigidbody2D>();
        boxCollider2D = GetComponent<BoxCollider2D>();
        EventManager.AddEnemyDeadInvoker(this);
	}

    // Update is called once per frame
    void Update()
    {
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        enemyDeadEvent.Invoke(this);
        Destroy(gameObject);
    }

    // event related methods

    public void AddEnemyDeadListener(UnityAction<Enemy> listener)
    {
        enemyDeadEvent.AddListener(listener);
    }

}
