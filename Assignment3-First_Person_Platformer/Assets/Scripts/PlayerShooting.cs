using UnityEngine;
using System.Collections;

public class PlayerShooting : MonoBehaviour {

    public Transform LazerOrigin;
    public AudioSource LazerSound;
    public Transform PlayerCam;
    
    public ParticleSystem endEffect;
    
	// Use this for initialization
	void Start ()
    {
        
	
	}
	
	// Update is called once per frame
	void FixedUpdate ()
    {
        if(Input.GetButtonDown("Fire1"))
        {
            
            RaycastHit hit;
            if (Physics.Raycast(this.PlayerCam.position, this.PlayerCam.forward, out hit))
           
                Debug.Log(hit.point);
            }
        }
	
	}

