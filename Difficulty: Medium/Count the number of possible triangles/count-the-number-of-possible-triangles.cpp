//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count the number of possible triangles.
    int countTriangles(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        int count=0;
        int i=n-1;
        
        while(i>1)
        {
            int start=0;
            int end=i-1;
            
            while(start < end)
            {
                if(arr[start] + arr[end]  > arr[i])
                {
                    count+=(end-start); //for 3467 start=3 , end=6 and i =7 here if we fix
                    end--;              // end&i which are 6&7, if num at start + end > i
                }                       //that means all numbers afer start satisfy
                                        //hence add also like 467,367 in this case
                                        
                                        
                else{
                    start++;
                }
            }
            
            i--;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.countTriangles(a) << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends