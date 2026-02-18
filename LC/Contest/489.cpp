#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int, int> fm;
        int n = bulbs.size();

        // Create an FM
        for(int i = 0; i<n; i++){
            fm[bulbs[i]]++;
        }

        vector<int> results;

        for(auto &it: fm){
            if(it.second % 2 == 1){
                results.push_back(it.first);
            }
        }

        // sort the array and return;


        return results;
    }
};