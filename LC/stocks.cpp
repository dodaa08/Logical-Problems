#include <iostream>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int buyidx = 0;
        int n = prices.size();

        for(int i=1 ; i<n; i++){
            if(prices[i]<buy){
                buy = prices[i];
                buyidx = i;
            }
        }

        int sell = prices[buyidx];

        for (int j = buyidx; j < n; j++) {
            if (prices[j] > sell) {
                sell = prices[j];
            }
        }


        int profit = sell - buy;
        if(profit <= 0){
            return 0;
        }
        return profit;
    }
};