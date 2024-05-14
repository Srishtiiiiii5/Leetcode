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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p;
        ListNode* q;
        if(head==NULL)
            return head;
        
        while( head && head->val==val){
            q=head;
            head=head->next;
       
        }
        if(q==NULL)
            return q;
        
        p=head;
        q=head;
        
        while(p && q){
            if(p->val != val){
                q=p;
                p=p->next;
            }
            else if(p->val == val){
                //ListNode* temp = p;
                q->next=p->next;
                p=p->next;    
                //delete(temp);
            }
        }
        return head;
        
    }
};