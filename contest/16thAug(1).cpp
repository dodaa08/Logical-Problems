#include <stdio.h>
#include <vector>
#include <climits>    // For INT_MAX
#include <cstdlib>    // For abs()
using namespace std;

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int n = drones.size();
        int minDistance = INT_MAX;
        int resultIndex = -1;

        for(int i = 0; i<n; i++){
            int x  = drones[i][0];
            int y =  drones[i][1];
            int range = drones[i][2];

            int disctance  = abs(x - target[0]) + abs(y - target[1]);
            if(disctance <= range && dis
                 < disctance){
                minDistance = disctance;
                resultIndex = i;
            }
        }

        return resultIndex;

        
    }
};