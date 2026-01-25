class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        for(int i = n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                continue;
            }
            else{
                index = i+1;
                break;
            }
        }    
        return index;
    }
}