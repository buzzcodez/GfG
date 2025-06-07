class Solution {
  public:

    // Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[], int n) {
        // Your code here
        
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string,int>mydict;
        for(int i=0;i<n;i++)
            mydict[arr[i]]++;
        string key;
        int val=0;
        for(auto ele : mydict){
            if(ele.second>val || ele.second==val && ele.first<key){
                val=ele.second;
                key=ele.first;
            }
        }
        return {key,to_string(val)};
    }
};