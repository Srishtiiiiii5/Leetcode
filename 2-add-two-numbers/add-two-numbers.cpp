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
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* p;
//         ListNode* q;
//         ListNode* root;
//         ListNode* r;
//         p=l1;
//         q=l2;
//         int carry=0;
//         int sum= p->val + q->val;
//         if(sum>9){
//             root=new ListNode(sum%10);
//             carry=sum/10;
//             root->next=NULL;
//         }
//         else{
//             root=new ListNode(sum);
//             root->next=NULL;
//         }
//         r=root;
//         p=p->next;
//         q=q->next;
//         while(p && q){
//             sum= p->val + q->val + carry;
//             if(sum>9){
//                 ListNode* temp;
//                 temp=new ListNode(sum%10);
//                 temp->next=NULL;
//                 r->next=temp;
//                 r=temp;
//                 carry=sum/10;
                
//             }
//             else{
//                 ListNode* temp;
//                 temp=new ListNode(sum);
//                 carry=0;
//                 temp->next=NULL;
//                 r->next=temp;
//                 r=temp;
//             }
//             p=p->next;
//             q=q->next;
//         }
//         while(p){
//             ListNode* temp;
//             sum= p->val+ carry;
//             if(sum>9){
//                 temp=new ListNode(sum%10);
//                 carry=sum/10;

//             }
//             else{
//                 temp=new ListNode(sum);
//                 carry=0;
//             }
//             temp->next=NULL;
//             r->next=temp;
//             r=temp;
//             p=p->next;
//         }
//         while(q){
//             ListNode* temp;
//             sum=q->val+carry;
//             if(sum>9){
//                 temp=new ListNode(sum%10);
//                 carry=sum/10;

//             }
//             else{
//                 temp=new ListNode(sum);
//                 carry=0;
//             }
//             temp->next=NULL;
//             r->next=temp;
//             r=temp;
//             q=q->next;
//         }
//         if(carry!=0){
//             ListNode* temp;
//             temp=new ListNode(1);
//             temp->next=NULL;
//             r->next=temp;
//             r=temp;
//         }
//         return root;
//     }
// };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2,int carry=0) {

        ListNode* n=new ListNode();
        if(l1 and l2){
            int num=l1->val + l2->val + carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1->next,l2->next,carry);
        }else if(l1){
            int num=l1->val + carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1->next,l2,carry);
        }else if(l2){
            int num=l2->val + carry;
            carry=num/10;
            num=num%10;
            n->val=num;
            n->next=addTwoNumbers(l1,l2->next,carry);
        }else if(carry>0){
            n->val=carry;
        }else return nullptr;
        
        return n;
    }
};
