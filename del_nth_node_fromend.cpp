   ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* ans=new ListNode();
        ans->next=head;
        ListNode* slow=ans;
        ListNode* fast=ans;
        for(int i=1;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast->next!=nullptr)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return ans->next;
        
        
    }
