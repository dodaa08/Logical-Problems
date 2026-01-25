class Solution {
public:

    vector<int> rotate_array(vector<int>& nums, int times){
        int n = nums.size();
        times = times % n;
        for(int t = 0; t < times; t++){
    int first = nums[0];
    nums.erase(nums.begin());
    nums.push_back(first);
}

        return nums;
    };

    vector<int> rotateElements(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> positive_nums;

        for(int i=0; i<n; i++){
            if(nums[i]>=0){
                positive_nums.push_back(nums[i]);
            }
        }
        if(positive_nums.size() == 0) return nums;

        int times = k % positive_nums.size();
        rotate_array(positive_nums, times);

        // plce them back
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                nums[i] = positive_nums[idx++];
            }
        }

        return nums;
    }
};