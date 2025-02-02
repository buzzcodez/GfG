//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // be the first person in bhi to get placed
        if(n==0 || n==1)    return n;
        
        long long l=1,h=n ,ans;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(mid*mid==n){
                return mid;
            }
            if(mid*mid<n){
                l=mid+1;
                ans=mid;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
        

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends