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
    int countNodesinLoop(Node *head) 
    {
        Node* temp=head;
        map<Node*,int> mpp;
        while(temp!=NULL)
        {
            if(mpp.find(temp)==mpp.end())
            {
                mpp[temp]=1;
                temp=temp->next;
            }
            else 
            {
                Node* lp=temp;
                int count=1;
                lp=lp->next;
                while(lp!=temp)
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
