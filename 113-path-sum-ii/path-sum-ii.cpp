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
    vector<vector<int>>vfinal;
    void solve(TreeNode* root, int tsum, vector<int>&v){
        if(root==nullptr) return;

        v.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr && root->val ==tsum){
            vfinal.push_back(v);
        }
        solve(root->left,tsum- root->val,v); 

        solve(root->right,tsum- root->val,v);

        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>v;
        solve(root, targetSum, v);
        return vfinal;
    }
};