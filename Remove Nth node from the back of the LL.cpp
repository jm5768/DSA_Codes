class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (!head || !head->next) return NULL;

        ListNode* temp = head;
        int count = 0;

        // Count total nodes
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        // If we need to remove the head
        if (n == count)
        {
            head = head->next;
            return head;
        }

        // Go to (count - n - 1)th node
        count = count - n;
        int i = 1;
        temp = head;
        while (count > i)
        {
            temp = temp->next;
            i++;
        }

        // Fix: check if temp->next exists
        if (temp->next) temp->next = temp->next->next;

        return head;
    }
};
