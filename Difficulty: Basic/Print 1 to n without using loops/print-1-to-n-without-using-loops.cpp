// User function Template for C++
class Solution {
  public:
    void printTillN(int n) {
        if(n==0){
            return;
        }
        else{
            printTillN(n-1);
            cout<<n << " ";
        }
      
        
    }
};