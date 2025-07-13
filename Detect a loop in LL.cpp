/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        /* TC-O(n*2*logn) SC-O(n)
        map<ListNode*,int> mpp;
        ListNode* temp=head;
        while(temp!=NULL)   
        {
            if(mpp.find(temp)==mpp.end())
            {
                mpp[temp]=1;
                temp = temp->next;
            }
            else return true;

        
        }
        return false;
        */
        ListNode* slow = head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow) return true;
        }
        return false;
    }
};
