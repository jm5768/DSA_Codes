/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution {
  public:
    Node* reverseList(struct Node* head) 
    {
        if(head==NULL||head->next==NULL) return head;
        
        Node * newhead=reverseList(head->next);
        Node * front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
       
    }
};
