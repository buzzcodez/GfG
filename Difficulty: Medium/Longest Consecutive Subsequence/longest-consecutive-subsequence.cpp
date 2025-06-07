class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return 0;
        
        sort(arr.begin(),arr.end());
        int res=1 , cnt=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) continue;
            else if(arr[i]-arr[i-1]==1) cnt++;
            else {
                res=max(res,cnt);
                cnt=1;
            }
        }
        res=max(res,cnt);
        return res;
        
        
        
    }
};