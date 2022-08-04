class Solution {
public:
    int maxsum(TreeNode*node,int &maxx)
    {
        if(node==NULL)
            return 0;
        int  left=max(0,maxsum(node->left,maxx));
        int right=max(0,maxsum(node->right,maxx));
        maxx=max(maxx,left+right+node->val);
        
        return max(left,right)+node->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxx=INT_MIN;
        maxsum(root,maxx);
        return maxx;
        
    }
};
