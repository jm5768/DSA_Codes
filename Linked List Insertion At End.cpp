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
    Node *insertAtEnd(Node *head, int x) 
    {
        Node * temp=new Node(x);

        if (head == NULL) 
        {
            return temp; // if list is empty, return new node as head
        }
        
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
            
        }
        p->next=temp;
        return head;
    }

};
