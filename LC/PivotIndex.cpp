#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     
        int Lsum = 0;
        int n = nums.size();
        int sum = 0;

        if(n <= 0){
            return -1;
        }

        for(int i = 0; i<n ; i++){
            sum+=nums[i];
        }

        // find the pivot!
        for(int i =0 ; i<n; i++){
            int Rsum = sum - Lsum - nums[i];
            if(Lsum == Rsum ){
                return i;
            }
            else{
                Lsum += nums[i];
            }
        }

        return -1;
    }
};