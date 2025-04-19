//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        int cnt=0;
        for(int i=0 ; i<arr.size();i++){
            if(x==arr[i]){
                cnt++;
            }
            
        
        }
        return cnt;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int x;
        cin >> x;
        cin.ignore();
        Solution ob;
        cout << ob.findFrequency(arr, x) << endl;
    }

    return 0;
}
// } Driver Code Ends