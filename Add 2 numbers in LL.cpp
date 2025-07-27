/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* dummyhead=new ListNode(-1);
        ListNode* curr=dummyhead;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int carry=0;
        while(temp1!=NULL||temp2!=NULL)
        {
            int sum=carry;
            if(temp1) sum=sum+(temp1->val);
            if(temp2) sum=sum+(temp2->val);
            ListNode* n= new ListNode(sum%10);
            carry=sum/10;

            curr->next=n;
            curr=curr->next;
            if(temp1) temp1=temp1->next;
            if(temp2) temp2=temp2->next;

            if(carry)
            {
                ListNode * newnode= new ListNode(1);
                curr->next=newnode;
                newnode->next=NULL;
            }
            
        }
        return dummyhead->next;
    }
};
