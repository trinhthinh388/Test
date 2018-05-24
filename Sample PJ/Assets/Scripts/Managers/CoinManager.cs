using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace CompleteProject
{
    public class CoinManager : MonoBehaviour
    {

        public Text coinText;
        int startCoin = 0;
        public static int currentCoin;
        // Use this for initialization
        void Start()
        {
            currentCoin = startCoin;
        }

        // Update is called once per frame
        void Update()
        {
            coinText.text = currentCoin.ToString();
        }
    }
}
