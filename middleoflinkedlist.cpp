class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr and fast->next!=nullptr)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
        
    }
};
