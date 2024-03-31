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
    bool hasCycle(ListNode *head) {
        ListNode* p;
        ListNode* q;
        p=q=head;
        while(p!=NULL){
            p=p->next;
            if(p!=NULL){
                p=p->next;
                q=q->next;
            }
            if(p==q)
                return true;
        }
        return false;
    }
};