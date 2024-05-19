class Solution {
public:
    
    bool ischeck(TreeNode* root, long min, long max){
        if(root==NULL) return true;

        if(root->val > min && root->val < max){
            return ischeck(root->left, min, root->val) && ischeck(root->right, root->val, max);
        }
        else{
            return false;
        }
    }
    
    bool isValidBST(TreeNode* root) {
        return ischeck(root, LONG_MIN, LONG_MAX);
    }
};