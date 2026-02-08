class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(k==1) return 0;
        // Sort the array
        sort(nums.begin(), nums.end());

        int min_diff = INT_MAX;
        for(int i =0; i<=n-k; i++){
            int min = nums[i];
            int max =  nums[i+k-1];

            int diff = max - min;
            min_diff = min(diff, min_diff);
        }

        return min_diff;

    }
};