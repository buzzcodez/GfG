
class Solution {
  public:
    // Function to count subarrays with 1s and 0s.
    long long int countSubarrWithEqualZeroAndOne(int arr[], int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                arr[i]=-1;
            }
        }
        int cnt=0 , sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                cnt++;
            }
            if(mp.find(sum)!=mp.end()){
                cnt+=mp[sum];
            }
            mp[sum]++;
        }
        return cnt;
        
        
    }
};