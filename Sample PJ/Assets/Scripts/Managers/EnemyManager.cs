﻿using UnityEngine;

namespace CompleteProject
{
    public class EnemyManager : MonoBehaviour
    {
        PlayerHealth playerHealth;       // Reference to the player's heatlh.
        public GameObject enemy;                // The enemy prefab to be spawned.
        public float spawnTime = 3f;            // How long between each spawn.
        Transform[] spawnPoints;         // An array of the spawn points this enemy can spawn from.

        GameObject player;

        void Awake()
        {
            spawnPoints = GameObject.FindGameObjectWithTag("SpawnPoint").GetComponentsInChildren<Transform>();
            playerHealth = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerHealth>();
        }

        void Start ()
        {
            // Call the Spawn function after a delay of the spawnTime and then continue to call after the same amount of time.
            InvokeRepeating ("Spawn", spawnTime, spawnTime);
        }


        void Spawn ()
        {
            Debug.Log(spawnPoints.Length);
            // If the player has no health left...
            if(playerHealth.currentHealth <= 0f)
            {
                // ... exit the function.
                return;
            }

            // Find a random index between zero and one less than the number of spawn points.
            int spawnPointIndex = Random.Range (1, spawnPoints.Length - 1);

            // Create an instance of the enemy prefab at the randomly selected spawn point's position and rotation.
            Instantiate (enemy, spawnPoints[spawnPointIndex].position, spawnPoints[spawnPointIndex].rotation);
        }
    }
}