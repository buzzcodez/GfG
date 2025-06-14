class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int st=0;
        int e=s.size()-1;
        while(st<=e){
            if(s[st]!=s[e]){
                return 0;
            }
            else{
                st++;
                e--;
            }
        }
        return 1;
        
    }
};