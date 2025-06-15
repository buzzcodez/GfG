// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int maxi=arr[0];
        int mini=arr[0];
        for(auto it:arr){
            maxi=max(maxi,it);
            mini=min(mini,it);
        }
        return{mini,maxi};
    }
};