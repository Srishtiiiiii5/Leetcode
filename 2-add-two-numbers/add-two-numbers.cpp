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
        ListNode* first= l1;
        ListNode* second = l2;
        ListNode* head = NULL;
        ListNode* p= NULL;
        int carry=0;
        bool flag=true;

        while(first && second){
            int sum= first->val + second->val + carry;
            if(sum>9){
                carry= 1;
                sum= sum%10;
            }
            else{
                carry=0;
            }
            ListNode* temp = new ListNode();
            temp->val = sum;
            if(flag){
                head= temp;
                p=head;
                flag=false;
            }
            else{
                p->next=temp;
                p=temp;
            }
            temp->next=NULL;
            first= first->next;
            second = second->next;
        }
        while(first ){
            int sum= first->val + carry;
            if(sum>9){
                carry= 1;
                sum= sum%10;
            }
            else{
                carry=0;
            }
            ListNode* temp = new ListNode();
            temp->val = sum;
            temp->next=NULL;
            p->next= temp;
            p=temp;
            first= first->next;
        }
        while(second){
            int sum= second->val + carry;
            if(sum>9){
                carry= 1;
                sum= sum%10;
            }
            else{
                carry=0;
            }
            ListNode* temp = new ListNode();
            temp->val = sum;
            temp->next=NULL;
            p->next= temp;
            p=temp;
            second= second->next;
        }
        if(carry== 1){
            ListNode* temp = new ListNode();
            temp->val = 1;
            temp->next=NULL;
            p->next= temp;
        }
        return head;
    }

};