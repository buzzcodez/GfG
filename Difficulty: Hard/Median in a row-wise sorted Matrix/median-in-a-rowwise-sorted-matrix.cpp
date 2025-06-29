// User function template for C++

class Solution {
  public:
    int helper(vector<int>&row , int target){
        //  Counts how many numbers are <= target in a sorted row
        return upper_bound(row.begin(),row.end(),target)-row.begin();
    }
    int median(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int l=0;
        int h=2000;
        
        while(l<=h){
            int mid=(l+h)/2;
            int cnt=0;
            
            for(int i=0;i<n;i++){
                cnt+=helper(mat[i],mid);
            }
            if(cnt<=(n*m)/2) l=mid+1;
            else h=mid-1;
        }
        return l;
    }
};
