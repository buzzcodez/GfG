class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        unordered_map<int,int>mp;
        int sum=0,cnt=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==tar) cnt++;
        
            if(mp.find(sum-tar)!=mp.end()){
            cnt+=mp[sum-tar];
        }
        mp[sum]++;
        }
        return cnt;
        
       
    }
};