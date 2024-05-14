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
        if(head == NULL) return head;

        head->next = removeElements(head->next, val);

        if(head->val == val) {
            return head->next;
        }
        return head;

        // ListNode* p;
        // ListNode* q;
        // if(head==NULL)
        //     return head;
        
        // while( head && head->val == val){
        //     ListNode* temp= head;
        //     head=head->next;
        //     delete(temp);
       
        // }
        
        // p=head;
        // q=head;
        
        // while(p){
        //     if(p->val != val){
        //         q=p;
        //         p=p->next;
        //     }
        //     else if(p->val == val){
        //         q->next=p->next;
        //         delete(p);
        //         p= q->next;
                
        //     }
        // }
        // return head;
        
    }
};