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

    ListNode* reverseList(ListNode* head) {

        ListNode* previous=NULL;
        ListNode* current= head;
        ListNode* next;
        while(current!=NULL){
            next=current->next;
            current->next= previous;
            previous=current;
            current=next;
        }
        return previous;
        
    }

    ListNode* doubleIt(ListNode* head) {
        if(head==NULL){return NULL;}
        ListNode* prev=head;
        head= reverseList(head);
        int carry=0;
        ListNode* curr=head;
        while(curr!=NULL){
            prev=curr;
            int x= (curr->val)*2 + carry;
            if(x>9){
                curr->val= x%10;
                carry=1;
            }
            else{
                curr->val = x;
                carry=0;
            }
            curr=curr->next;

        }
        if(carry==1){
            ListNode* temp=new ListNode(1);
            prev->next=temp;
            temp->next=NULL;

        }
        else{
            prev->next=NULL;
        }
        head=reverseList(head);
        return head;


    }
};