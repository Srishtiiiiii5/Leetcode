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
    int getLength(ListNode* head){
        int c=0;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {

        if(!head || !head->next || k==0){
            return head;
        }
         
        int l= getLength(head);
        k=k%l;
        if(k==0){
            return head;
        }
        l=l-k;
        ListNode* p = head;
        int c=0;
        ListNode* q;
        while(c<l){
            q=p;
            p=p->next;
            c++;
        }
        q->next = NULL;
        ListNode* a=p;
        while(a->next!=NULL){
            a=a->next;
        }
        a->next=head;
        head=p;
        return head;
        


    }
};