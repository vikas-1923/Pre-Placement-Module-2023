class Solution {
public:
    bool isValidBST(TreeNode* root) {
      return isValidBST(root,LLONG_MIN,LLONG_MAX)  ;
    }
    bool isValidBST(TreeNode *root,long long min,long long max)
    {
        if(root==NULL)
            return true;
        if(root->val>=max || root->val<=min)
            return false;
        return isValidBST(root->left,min,root->val) && isValidBST(root->right,root->val,max);
    }
};
