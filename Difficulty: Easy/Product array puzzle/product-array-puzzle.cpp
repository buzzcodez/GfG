//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code mission ion july 2025
        vector<int>ans(arr.size(),1);
            int left=1 , right=1;
            for(int i=0 ; i<arr.size()-1;i++){
                left=left*arr[i];
                ans[i+1]=ans[i+1]*left;
            }
            for(int i=arr.size()-1 ; i>0 ; i--){
                right=right*arr[i];
                ans[i-1]=ans[i-1]*right;
            }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends