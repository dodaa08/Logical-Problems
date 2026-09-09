#include <stdio.h>
#include <vector>
using namespace std;

class Solution {
public:
    void SortOpp(vector<int>& arr){
         
        for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[j]>arr[i]){
                swap(arr[i], arr[j]);
            }
        }
    }
    }

    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int disCountSum = 0.0;
        int n = prices.size();
        int m = discounts.size();

        SortOpp(discounts);
        SortOpp(prices);

        for(int i = 0; i<n; i++){
            if(i<m){
                disCountSum += prices[i] * (100 - discounts[i]) / 100.0;
            }
            else{
                disCountSum += prices[i];
            }
        }

        return disCountSum;
    }
};
