//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int maxWater(vector<int> &arr) {
        // code here
        int lp=0 , rp=arr.size()-1 , maxWater=0;
        while(lp<rp){
            int w = rp-lp;
            int h = min(arr[lp] , arr[rp]);
            int currWater = w*h;
            maxWater = max(maxWater , currWater);
            
            arr[lp] < arr[rp] ? lp++ : rp--; // lp r
        }
        return maxWater;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends