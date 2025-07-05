/* Linkedlist Node
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
class Solution 
{
  public:

    Node* deleteNode(Node* head, int x) 
    {
        if(head==NULL) return NULL;
        
        if(x==1)
        {
            head=head->next;
            return head;
        }
        
        int count=0;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            count++;
            if(count==x)
            {
                prev->next = prev->next->next;
                break;
            }
            prev=temp;
            temp=temp->next;
            
        }
        return head;
        
        
        
    }
};
