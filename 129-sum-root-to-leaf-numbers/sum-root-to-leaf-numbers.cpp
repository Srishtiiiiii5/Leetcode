/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void solve(TreeNode* root, int sum, int& target){
        int temp = sum;
        sum = sum*10+root->val;
        if(root->left == NULL && root->right==NULL){
            target += sum;   
            return ;
        }
        if(root->left){
            solve(root->left,sum,target);
        }
        if(root->right){
            solve(root->right,sum,target);
        }
        // if(root==NULL){
        //     target=target+sum;
        //     cout<<target<<"\n";
        //     return;
        // }

        // sum=sum*10 + root->val;
        // solve(root->left,sum, target);
        // solve(root->right, sum, target);
        // sum=sum/10 - root->val;
    }
    int sumNumbers(TreeNode* root) {
        int target=0;
        int sum=0;
        solve(root,sum,target);
        return target;
    }
};