/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    void printLL(Node* head){
        while(head!=NULL){
            cout << head->data << " ";
            head=head->next;
        }
    }
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newNode=new Node(x);
        if(head==NULL){
            return newNode;
        }
        Node* temp=head;
        while(temp->next!=NULL){
           temp=temp->next;
            
        }
         temp->next=newNode;
         return head;
       
            
    }
    
};