//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    private:
    int GCD(int a,int b){
        while(a>0 and b>0){
            if(a>b){
                a=a%b;
            }
            else{
                b=b%a;
            }
           
        }
         if(a==0){
                return b;
            }
            return a;
    }
    int LCM(int a,int b){
    int gcd= GCD(a,b);
    return (a*b)/gcd;
    }
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
       int gcd= GCD(a,b);
        int lcm=LCM(a,b);
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