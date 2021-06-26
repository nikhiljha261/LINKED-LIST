/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* newdummy=dummy;
        while(l1!=nullptr and l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                newdummy->next=l1;
                l1=l1->next;
            }
            else
            {
                newdummy->next=l2;
                l2=l2->next;
            }
            newdummy=newdummy->next;
        }
        if(l1!=nullptr)
        {
            while(l1!=nullptr)
            {
                newdummy->next=l1;
                l1=l1->next;
                newdummy=newdummy->next;
            }
        }
        if(l2!=nullptr)
        {
            while(l2!=nullptr)
            {
                newdummy->next=l2;
                l2=l2->next;
                newdummy=newdummy->next;
            }
        }
        return dummy->next;
    }
};
