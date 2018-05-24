using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

namespace CompleteProject
{
    public class ScoreManager : MonoBehaviour
    {
        public static float score;        // The player's score.
        PlayerMovement playerMovement;
        PlayerHealth playerHealth;

        public Text text;                      // Reference to the Text component.


        void Awake ()
        {
            playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
            playerHealth = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerHealth>();
            score = 0;
        }

        void Update ()
        {

            if (!playerMovement.walking || playerHealth.isDead)
            {
                return;
            }

            score += playerMovement.GetMovement().magnitude;
            // Set the displayed text to be the word "Score" followed by the score value.
            text.text = score.ToString() + " m";
        }
    }
}