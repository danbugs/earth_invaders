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
    EnemyReady enemyReadyEvent = new EnemyReady();

    // movement support
    Vector2 movementHorizontalPosition;
    Vector2 movementVerticalPosition;

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

        EventManager.AddEnemyMoveListener(Move);

	}

    // Update is called once per frame
    void Update()
    {
    }

    private void FixedUpdate()
    {
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        enemyDeadEvent.Invoke(this);
        Destroy(gameObject);
    }

    void Move(EnemyMovements move)
    {
        movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
        movementVerticalPosition = new Vector2(transform.position.x, transform.position.y - Constants.EnemyMove);
        switch (move)
        {
            case EnemyMovements.Right:
                movementHorizontalPosition = new Vector2(transform.position.x + Constants.EnemyMove, transform.position.y);
                rb2D.MovePosition(movementHorizontalPosition);
                break;
            case EnemyMovements.Left:
                movementHorizontalPosition = new Vector2(transform.position.x - Constants.EnemyMove, transform.position.y);
                rb2D.MovePosition(movementHorizontalPosition);
                break;
            default:
                rb2D.MovePosition(movementVerticalPosition);
                break;
        }

    }

    // event related methods

    public void AddEnemyDeadListener(UnityAction<Enemy> listener)
    {
        enemyDeadEvent.AddListener(listener);
    }


}
