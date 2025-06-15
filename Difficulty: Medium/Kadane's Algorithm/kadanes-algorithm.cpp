class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum=arr[0]; //sum current subarray ka sum
        int res=arr[0]; //ab tak ka maximum sum
        for(int i=1;i<arr.size();i++){
            sum=max(sum+arr[i],arr[i]);
            res=max(res,sum);
        }
        return res;
    }
};