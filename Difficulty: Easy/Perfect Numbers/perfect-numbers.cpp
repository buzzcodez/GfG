//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPerfectNumber(int n) {
        // code here
        int sum=1;
        //cout<<ceil((double)6/4);
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                sum+=i;
                //cout<<sum<<"in loop"<<endl;
                int x=n/i;
                
                if(x!=i){
                    sum+=x;
                }
            }
            //cout<<sum<<endl;
        }
        
        if(sum==n){
            return true;
        }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        bool ans = ob.isPerfectNumber(N);
        if (ans)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends