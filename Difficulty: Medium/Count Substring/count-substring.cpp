//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int countSubstring(string s) {
        int n=s.size();
        int cnt=0 , start=0;
        unordered_map<char,int>freq;
        for(int end=0;end<n;end++){
            freq[s[end]]++;
            while(freq['a']>0 && freq['b']>0 && freq['c']>0){
                cnt+=(n-end);
                freq[s[start]]--;
                start++;
            }
            
        }
        return cnt;
     
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends