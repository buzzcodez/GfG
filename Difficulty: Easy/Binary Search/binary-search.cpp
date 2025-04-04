//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

// User function template for C++

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
    int start = 0;
    int end = arr.size() - 1;
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            result = mid;  // Store the current index
            end = mid - 1; // Move left to find the first occurrence
        } else if (arr[mid] > k) {
            end = mid - 1; // Search in the left half
        } else {
            start = mid + 1; // Search in the right half
        }
    }

    return result;
}

};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        vector<int> arr;
        string input;
        cin.ignore();
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int res = ob.binarysearch(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends