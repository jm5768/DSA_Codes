/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
};  
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        int count = 1;
        ListNode* temp=head;
        vector<int> odd;
        vector<int> even;
        while(temp!=NULL)
        {
            if(count==1||count%2!=0)
            {
                odd.push_back(temp->val);
            }
            else
            {
                even.push_back(temp->val);
            }

            count++;
            temp=temp->next;
        }
        temp=head;
        for(auto it : odd)
        {
            temp->val=it;
            temp=temp->next;
        }
        for(auto it : even)
        {
            temp->val=it;
            temp=temp->next;
        }
        return head;
    }
};
