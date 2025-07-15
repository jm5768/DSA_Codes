/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) 
    {
     
        if(head==NULL||head->next==NULL) return head;
        Node* temp = head;
        Node* zerohead = new Node(-1);
        Node* onehead = new Node(-1);
        Node* twohead = new Node(-1);
        Node* zero=zerohead;
        Node* one=onehead;
        Node* two=twohead;
        
        while(temp!=NULL)
        {
            if(temp->data==0) 
            { 
                zero->next=temp;
                zero=zero->next;
            }
            else if(temp->data==1) 
            {
                one->next=temp;
                one=one->next;
            }
            else
            {
                two->next=temp;
                two=two->next;
            }
            temp=temp->next;
            
        }
        zero->next=(onehead->next)? (onehead->next) : (twohead->next);
        one->next=twohead->next;
        two->next=NULL;
        
        Node* newhead=zerohead->next;
        
        delete zerohead;
        delete onehead;
        delete twohead;
        
        return newhead;
    }
};
