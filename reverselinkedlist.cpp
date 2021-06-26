class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* front=nullptr;
        if(head==nullptr) return head;
        while(head->next!=nullptr)
        {
            ListNode* current=head;
            head=head->next;
            current->next=front;
            front=current;
        }
        head->next=front;
        return head;
    }
};
