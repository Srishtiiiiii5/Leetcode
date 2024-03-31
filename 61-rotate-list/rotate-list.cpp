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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||  head->next == NULL  || k==0)
            return head;
        int len=0;
        ListNode* tea=head;
        while(tea!=NULL){
            tea=tea->next;
            len++;
        }
        k=k%len;
        for(int i=0; i<k;i++){
            ListNode* p;
            p=head;
            ListNode* q;
            while(p->next !=NULL){
               q=p;
               p=p->next;
            }
            
            int x = p->val;
            ListNode* temp=new ListNode(x);
            temp->next=head;
            head=temp;
            q->next=NULL;
        }
        return head;
        
    }
};