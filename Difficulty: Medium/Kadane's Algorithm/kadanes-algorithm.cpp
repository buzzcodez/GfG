class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            sum=max(sum+arr[i],arr[i]);
            res=max(sum,res);
        }
        return res;
    }
};