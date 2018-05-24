using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace CompleteProject
{
    public class ShopManager : MonoBehaviour
    {

        public GameObject[] PlayerPreFabs;
        public int[] prices;
        public Text[] priceText;
        int playerCoin;
        // Use this for initialization
        void Start()
        {
            for (int i = 0; i < prices.Length; i++)
            {
                priceText[i].text = prices[i].ToString();
            }

            playerCoin = PlayerPrefs.GetInt("Coin", 10000);
        }

        // Update is called once per frame
        void Update()
        {

        }

        public void purchase(int i)
        {
            if (prices[i] <= playerCoin)
                Debug.Log("Purchased");
            else
                Debug.Log("Can't purchase");
        }


    }
}
