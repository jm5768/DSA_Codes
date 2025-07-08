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
        /****************BRUTE (iterative) TC-O(2N) SC- O(n)*************************/
       /*
       stack<int> st;
       Node* temp=head;
       while(temp!=NULL)
       {
           st.push(temp->data);
           temp=temp->next;
       }
       temp=head;
       while(temp!=NULL)
       {
           temp->data=st.top();
           st.pop();
           temp=temp->next;
       }
       return head;
       */
       Node* temp=head;
       Node* prev=NULL;
       Node* front;
       while(temp!=NULL)
       {
           front=temp->next;
           temp->next=prev;
           prev=temp;
           temp=front;
           
       }
       return prev;
       
    }
};
