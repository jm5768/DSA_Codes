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
        int count0=0,count1=0,count2=0;
        Node* temp = head;
        while(temp != NULL)
        {
            if(temp->data==0) count0++;
            else if(temp->data==1) count1++;
            else count2++;
            
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(count0) 
            {
                temp->data=0;
                count0--;
            }
            else if(count1) 
            {
                temp->data=1;
                count1--;
            }
            else
            {
                temp->data=2;
                count2--;
            }
            temp=temp->next;
        }
        return head;
    }
};
