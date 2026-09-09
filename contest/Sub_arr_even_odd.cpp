#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int count = 0;        

        for(int i = 0; i<n; i++){
            int evenCount = 0;
            int oddCount = 0;
            for(int j = i; j<n; j++){
                if(nums[j] % 2 == 0){
                    evenCount++;
                }
                else oddCount++;

                // Valid if oddCount > 0 &&  x/y <= a/b;
                if(oddCount>0 && evenCount * b <= (long long) a *  oddCount){
                    count++;
                }
            }
        }
        return count;
    }
};