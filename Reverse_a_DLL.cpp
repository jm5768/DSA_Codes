/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverse(Node *head) 
    {
        if(head->next==NULL||head==NULL) return head;
        Node* temp = head;
        Node* temp1;
        Node *newhead;
        while(temp!=NULL)
        {
            temp1=temp->next;
            temp->next=temp->prev;
            temp->prev=temp1;
            if(temp->prev==NULL) head=temp;
            newhead= temp;
            temp=temp1;
            
        }
        
        return newhead;
        
        
        
    }
};
