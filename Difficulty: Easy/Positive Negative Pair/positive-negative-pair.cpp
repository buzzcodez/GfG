// User function template for C++

class Solution {
  public:
    // Function to return list containing all the pairs having both
    // negative and positive values of a number in the array.
    vector<int> findPairs(int arr[], int n) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            mp[abs(arr[i])]++;
            if(mp[abs(arr[i])]==2)
                v.push_back(-abs(arr[i])) , v.push_back(abs(arr[i]));
        }
        return v;
     
        
    }
};