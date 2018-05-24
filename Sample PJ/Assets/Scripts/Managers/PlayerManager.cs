using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace CompleteProject
{
    public class PlayerManager : MonoBehaviour
    {
        public GameObject[] player;
        // Use this for initialization
        void Awake()
        {
            player[1].SetActive(true);
            player[0].SetActive(false);
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}
