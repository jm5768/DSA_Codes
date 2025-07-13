/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) 
            {
                Node* lp=slow;
                int count=1;
                lp=lp->next;
                while(lp!=slow)
                {
                    lp=lp->next;
                    count++;
                }
                return count;
            }

    
        }
        return NULL;
    }
};
