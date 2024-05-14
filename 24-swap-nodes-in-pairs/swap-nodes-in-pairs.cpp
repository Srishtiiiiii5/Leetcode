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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr;
        ListNode* nextt;
        ListNode* prev;
        if(head==NULL || head->next==NULL){return head;}

        curr=head;
        nextt=head->next;
        curr->next=nextt->next;
        nextt->next=curr;
        head=nextt;
        prev=curr;
        curr=curr->next;
        if(curr!=NULL){
                nextt = curr->next;
            }
        while(curr!=NULL && curr->next!=NULL){
            curr->next=nextt->next;
            nextt->next=curr;
            prev->next= nextt;
            prev=curr;
            curr=curr->next;
            if(curr!=NULL){
                nextt = curr->next;
            }

        }
        return head;
        
    }
};