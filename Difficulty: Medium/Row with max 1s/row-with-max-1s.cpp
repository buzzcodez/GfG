// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=0;
        int m=arr[0].size()-1;
        int res=-1;
        
        while(n>=0 && n<arr.size() && m>=0){
            if(arr[n][m]==1){
                res=n;
                m--;
            }
            else{
                n++;
            }
        }
        return res;
    }
};