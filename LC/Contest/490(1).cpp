#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int one = 0;
        int second = 0;
        bool firstActive = true;

        for(int i = 0; i<nums.size(); i++){

                if(nums[i] % 2 == 1){
                    firstActive = !firstActive;
                }

                if(i%6==5){
                    firstActive = !firstActive;
                }

                if(firstActive)
                   one += nums[i];
                                
                else
                   second += nums[i];
       
        }

        int diff = one - second;

        return diff;
    }
};