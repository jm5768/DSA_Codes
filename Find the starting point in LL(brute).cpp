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
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode* temp=head;
        map<ListNode*,int> mpp;
        while(temp!=NULL)
        {
            if(mpp.find(temp)==mpp.end())
            {
                mpp[temp]=1;
                temp=temp->next;
            }
            else return temp;
        }
        return NULL;

    }
};
