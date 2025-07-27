/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    int calc(Node* temp) 
    {
        if(temp==NULL) return 1;
        int carry=calc(temp->next);
        temp->data=(temp->data)+carry;
        if(temp->data<10)
        {
            return 0;
        }
        temp->data=0;
        return 1;
    }
  
    Node* addOne(Node* head) {
        // Your Code here
        int carry = calc(head);
        if(carry==1)
        {
            Node* n= new Node(1);
            n->next=head;
            head=n;
        }
        return head;
    }
};
