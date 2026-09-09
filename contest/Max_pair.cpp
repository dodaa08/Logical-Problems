#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long best = 0;

        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                long long g = ((long long)nums[i]*nums[j]) / gcd(nums[i], nums[j]);
                best = max(best, g);
            }
        }

        return best;
    }
};