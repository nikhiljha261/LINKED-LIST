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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* newdummy=dummy;
        int carry=0;
        while(l1!=nullptr or l2!=nullptr)
        {
            int x=0;
            int y=0;
            if(l1!=nullptr)
            {
                x=l1->val;
                l1=l1->next;
            }
            if(l2!=nullptr)
            {
                y=l2->val;
                l2=l2->next;
            }
            int total=x+y+carry;
            int z=total%10;
            carry=total/10;
            ListNode* value=new ListNode(z);
            newdummy->next=value;
            newdummy=newdummy->next;
        }
        if(carry!=0)
        {
            ListNode* value=new ListNode(carry);
            newdummy->next=value;
            newdummy=newdummy->next;
        }
        return dummy->next;
    }
};
