#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> SortArray(vector<int> array){
          for(int i =0; i<array.size()-1; i++){
             for(int j = 0; j<array.size()-i-1; j++){
                // swap
                if(array[j] > array[j + 1]) {
    int temp = array[j];
    array[j] = array[j + 1];
    array[j + 1] = temp;
}

             }
          }

          return array;
    }

    vector<vector<int>> threeSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        if(numbers.size()<3){
           return {};
        }

        // Sort the array
        vector<int> nums = SortArray(numbers);
        vector<vector<int>> Result;

        for(int i =0; i<n-2; i++){
            
             int L = i+1;
             int R = n - 1;
             while(L<R){
                 int sum = nums[i] + nums[L] + nums[R];
                 if(sum == 0){
                     Result.push_back({nums[i], nums[L], nums[R]});
                     L++;
                     R--;
                    }
                    else if(sum<0){
                        L++;
                    }
                    else{
                        R--;
                    }
                }
        }


        return Result;
    }
};