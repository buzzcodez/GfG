//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        if(arr.empty())     return ans;
        
        int maxi = arr[arr.size()-1];
        ans.push_back(arr[arr.size()-1]);
        
        //check elements from right to left
        for(int i=arr.size()-2 ; i>=0 ;i--){
            if(arr[i]>=maxi){
                maxi=arr[i];
                ans.push_back(arr[i]);
                
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

// class Solution {
//     // Function to find the leaders in the array.
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         // Code here
//         vector<int> ans;
//         for(int i=0 ; i<arr.size() ;i++){
//             bool leader = true;
//             for(int j=i+1 ; j<arr.size() ;j++){
//                 if(arr[j]>=arr[i]){
//                     leader=false;
//                     break;
//                 }
//             }
//             if(leader){
//                 ans.push_back(arr[i]);
//             }
//         }
//         return ans;
//     }
// };

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.leaders(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no leaders are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends