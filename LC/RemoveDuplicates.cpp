#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            int W = 1;
            int n = nums.size();

           for(int i = 1; i<=n-1; i++){
               if(nums[i] == nums[W-1]){
                  continue;
               }
               else{
                  nums[W] = nums[i];
                  W++;
               }
           }

            return W;
    }
};