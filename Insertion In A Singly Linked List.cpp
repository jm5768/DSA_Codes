/************************************************************

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
Node * insert(Node * head, int n, int pos, int val) 
{
    
    Node* temp = new Node(val);
    Node* h=head;
    Node* prev;
    
    if(head==NULL||pos==0)
    {
        temp->next=head;
        head=temp;
        return head;

    }
    int count=0;
    while(h != NULL &&count!=pos)
    {
        prev=h;
        h=h->next;
        count++;

    }
    
    prev->next=temp;
    temp->next=h;
    return head;
    


}
