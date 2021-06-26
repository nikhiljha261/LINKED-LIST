ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(l1==nullptr)
        {
            return l2;
        }
        if(l2==nullptr)
        {
            return l1;
        }
        if(l1->val>l2->val)
        {
            swap(l1,l2);
        }
        ListNode* ans=l1;
        while(l1!=nullptr and l2!=nullptr)
        {
            ListNode* temp=nullptr;
            while(l1!=nullptr and l1->val<=l2->val)
            {
                temp=l1;
                l1=l1->next;
            }
            temp->next=l2;
            swap(l1,l2);
        }
        return ans;
        
    }
