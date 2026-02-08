#include <iostream>;
using namespace std;
#include <vector>;

class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> temarivolo(nums.begin(), nums.end());
        bool merged = false;
        while(true){
          for(int i =0; i<=temarivolo.size(); i++){
            long long sum = 0;
              if(temarivolo[i] == temarivolo[i+1]){
                 sum = temarivolo[i] + temarivolo[i+1];

                 temarivolo[i] = sum;
                 temarivolo.erase(temarivolo.begin() + i + 1);

                 merged = true;
                 break;
              }
          }

        if(!merged)break;
    
        }
        return temarivolo;       
    }
};