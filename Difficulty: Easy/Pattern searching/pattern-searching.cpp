//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool searchPattern(string& txt, string& pat) {
        // get placed before prafull at 20lpa
        if(txt.length()==pat.length()){
            if(txt==pat){
                return true;
            }
            return false;
        }
        else{
            for(int i=0 ; i<= txt.length() - pat.length();i++){
                
                   string sub = txt.substr(i,pat.length());
                   if(sub==pat){
                       return true;
                   }
            }
        }
        return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        string str, pat;
        cin >> str;
        cin >> pat;
        Solution obj;
        if (obj.searchPattern(str, pat) == true)
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends