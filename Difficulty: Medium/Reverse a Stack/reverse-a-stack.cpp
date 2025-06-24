// User function Template for C++

class Solution {
  public:
    void Reverse(stack<int> &St) {
        if(St.empty()) return;
        int topEle=St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St,topEle);
    }
    void insertAtBottom(stack<int>&St,int x){
        if(St.empty()){
            St.push(x);
            return;
        }
        int top=St.top();
        St.pop();
        insertAtBottom(St,x);
        St.push(top);
    }
};