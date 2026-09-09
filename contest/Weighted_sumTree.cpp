#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void DFS(vector<int>& depth, int node, int d, vector<vector<int>>& adj){
       depth[node] = d;

       for(int child : adj[node]){
          DFS(depth, child, d+1, adj);
       }
    }

    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = parent.size();
        vector<vector<int>> adj(n);

        for(int i = 1; i<n; i++){
            adj[parent[i]].push_back(i);
        }

        // DFS
        vector<int> depth(n, 0);
        DFS(depth, 0, 1, adj);

        int h = *max_element(depth.begin(), depth.end());

        long long totalWeight = 0;
        for(int i = 0; i<n; i++){
            long long weight = (long long)nums[i] * (h - depth[i] + 1);
            totalWeight += weight;
        }

        return totalWeight;


    }
};