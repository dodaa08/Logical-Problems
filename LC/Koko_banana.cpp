#include <stdio.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 0;
        int arrayMax = 0;
        int n = piles.size();
        for(int i = 0; i<n; i++){
            arrayMax = max(piles[i], arrayMax);   
        }

        
        while(k<arrayMax){
            int mid = (k + arrayMax)/2;
            int totalHours = 0;
            for(int i = 0; i<n; i++){
                totalHours  += (piles[i] + mid - 1) / mid;
            }    
            if(totalHours<=h){
                arrayMax = mid;
            }
            else {
               k = mid + 1;
            }
        }


        return k;

    }
};