class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* temp=nullptr;
        if(head==nullptr) return head;
        temp=head;
        len=1;
        while(temp->next!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        int del=len-n+1;
        temp=head;
        del--;
        if(del==0)
        {
            return head->next;
        }
        ListNode* prev=nullptr;
        while(del>0)
        {
            del--;
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        return head;
    }
};
