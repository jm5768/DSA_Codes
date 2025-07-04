#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    public:
    Node(int data1,Node* next1)
    {
        data=data1;
        next=next1;
    }
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node* ll(vector<int> arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main ()
{
    int count=0;
    vector<int> arr={2,5,8,7};
    Node * head =ll(arr);
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        count++;
        
    }
    cout<<"length :"<<count;
}
