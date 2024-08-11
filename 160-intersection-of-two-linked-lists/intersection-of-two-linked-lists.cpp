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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        stack<ListNode*> s1;
        stack<ListNode*> s2;
        ListNode* first= headA;
        ListNode* second= headB;
        while(first){
            s1.push(first);
            first=first->next;
        }
        while(second ){
            s2.push(second);
            second= second->next;
        }
        ListNode* ans= NULL;
        while(s1.size() && s2.size()){
            if(s1.top()== s2.top()){
                ans= s1.top();
                s1.pop();
                s2.pop();
            }
            else{
                return ans;
            }
        }
        return ans;
    }
};