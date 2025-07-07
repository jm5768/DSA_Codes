/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *findMiddle(Node *head) 
{ 
    /*
***************************Brute approach*******************
    int count=0;
    Node*h=head;
    while(h!=NULL)
    {
        count++;
        h=h->next;
    }
    int mid=(count/2)+1;
    count=0;
    Node*p=head;
    while(p!=NULL)
    {
        count++;
        if(count==mid) return p;
        p=p->next;
    }
    return NULL;
    */

    //Optimal
    Node* slow=head;
    Node * fast=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

