using UnityEngine;
using System.Collections;

public class Reset : MonoBehaviour {
    public GameObject spawnpoint;
    private Transform transform;
    // Use this for initialization
    void Start ()
    {
        spawnpoint = GameObject.FindWithTag("SpawnPoint");
        transform = GetComponent<Transform>();
	}
	
	// Update is called once per frame
	void Update ()
    {

	}
    void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.CompareTag("DeathBound")||other.gameObject.CompareTag("Enemy"))
        {
            print("enemy touched");
            transform.position = spawnpoint.transform.position;
        }
    }
}
