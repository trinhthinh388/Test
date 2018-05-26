using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace CompleteProject
{
    public class PowerManager : MonoBehaviour
    {
        public Image imortal;
        public Image Speed;
        public Image Health;
        public int startPower = 0;
        public GameObject hit;
        public static int currentPower;
        public float ImmortalTime = 5f;
        PlayerHealth playerHealth;
        PlayerMovement playerMovement;
        float currentSpeed;
        bool isHit;
        float timer = 0;

        void Awake()
        {
            playerHealth = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerHealth>();
            playerMovement = GameObject.FindGameObjectWithTag("Player").GetComponent<PlayerMovement>();
        }

        // Use this for initialization
        void Start()
        {
            hit.SetActive(false);
            currentPower = startPower;
            currentSpeed = playerMovement.speed;
            imortal.fillAmount = currentPower / 100;
            Speed.fillAmount = currentPower / 100;
            Health.fillAmount = currentPower / 100;
        }

        // Update is called once per frame
        void Update()
        {
            Debug.Log(currentPower);
            timer += Time.deltaTime;
            if(currentPower >= 100 && !isHit)
                hit.SetActive(true);
            if(timer >= ImmortalTime && isHit)
            {
                isHit = false;
                hit.SetActive(false);
                playerMovement.speed = currentSpeed;
                playerHealth.Immortal = false;
            }
            Display();
        }

        public void AbilityOn()
        {
            isHit = true;
            timer = 0;
            int i = currentPower;
            if(i >= 100 && i < 200)
            {
                Immortal();
            }
            if(i >= 200 && i < 300)
            {
                BoostSpeed();
            }
            if( i >= 300)
            {
                ReHealth();
            }
            currentPower = 0;
            imortal.fillAmount = currentPower / 100;
            Speed.fillAmount = currentPower / 100;
            Health.fillAmount = currentPower / 100;
        }

        void Immortal()
        {
            playerHealth.Immortal = true;
        }

        void BoostSpeed()
        {
            playerMovement.speed += 10;
        }

        void ReHealth()
        {
            playerHealth.currentHealth += 50;
        }

        void Display()
        {
            if(currentPower <= 100)
            {
                imortal.fillAmount = currentPower / 100;
            }
            else if(currentPower <= 200 && currentPower > 100)
            {
                Speed.fillAmount = (currentPower - 100) / 100;
            }
            else if(currentPower <= 300 && currentPower > 200)
            {
                Health.fillAmount = (currentPower - 200) / 100;
            }
        }

        void RESET()
        {
            imortal.fillAmount = currentPower / 100;
            Speed.fillAmount = currentPower / 100;
            Health.fillAmount = currentPower / 100;
        }
    }
}
