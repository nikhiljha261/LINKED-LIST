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
    ListNode *getIntersectionNode(ListNode *a1, ListNode *b1) {
        if(a1==nullptr or b1==nullptr)
        {
            return nullptr;
        }
        ListNode *a=a1;
        ListNode *b=b1;
        while(a!=b)
        {
            // a=a->next;
            // b=b->next;
            if(a==nullptr) a=b1;
            else a=a->next;
            if(b==nullptr) b=a1;
            else b=b->next;
            
            
        }
        return a;
    }
};
