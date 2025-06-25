class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
        vector <int> ans[V];
        for(auto it : edges){
            ans[it.first].push_back(it.second);
            ans[it.second].push_back(it.first);
        }
        vector<vector<int>>ans2;
        for(auto it:ans){
            ans2.push_back(it);
            
        }
        return ans2;
    }
};