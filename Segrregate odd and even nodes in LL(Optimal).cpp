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
        if(!head||!head->next) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenhead=head->next;
        
        while(even!=NULL&&even->next!=NULL)
        {
            odd->next=even->next;
            odd=odd->next;

            even->next=odd->next;
            even=even->next;
        }
        odd->next = evenhead;
        return head;
    }
};
