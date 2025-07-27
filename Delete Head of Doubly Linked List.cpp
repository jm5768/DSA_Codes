// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) 
{
    
    if(head==NULL||head->next==NULL) return NULL;
    Node*prev=head;
    head=head->next;
    head->prev=NULL;
    free(prev);
    return head;
    
}
