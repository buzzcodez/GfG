//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int oria=a , orib=b;
        while(a>0 and b>0){
            if(a>b)
             a=a%b;
            else
             b=b%a;
        }
        int gcd=max(a,b);
        
        int lcm = (oria/gcd)*orib;
        return{lcm,gcd};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends