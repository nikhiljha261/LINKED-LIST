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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(fast==nullptr)
        {
            return nullptr;
        }
        if(fast->next==nullptr)
        {
            return nullptr;
        }
        int c=1;
        bool cycle=false;
        while(fast->next!=nullptr and fast->next->next!=nullptr)
        {
            if(fast==slow and c!=1)
            {
                     cycle=true;
                break;
           
            }
            c++;
            slow=slow->next;
            fast=fast->next->next;
        }
        // cout<<7;
        if(cycle==false) return nullptr;
        fast=head;
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
        
    }
};
