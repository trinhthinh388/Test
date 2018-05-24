using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

namespace CompleteProject
{
    public class ScoreManager : MonoBehaviour
    {
        public static float score;        // The player's score.
        public PlayerMovement playerMovement;
        public PlayerHealth playerHealth;

        public Text text;                      // Reference to the Text component.


        void Awake ()
        {
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