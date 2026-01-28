#include <iostream>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i=1; i<prices.size(); i++){
           if(prices[i] < buy){
              buy = prices[i];
           }
           else{
            int today_p = prices[i] - buy;
              if(today_p > profit){
                  profit = today_p;
              }
           }
        }

        return profit;
    }
};