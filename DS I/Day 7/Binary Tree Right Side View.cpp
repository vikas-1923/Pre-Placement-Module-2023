class Solution {
public:
    void recur(TreeNode*root,int level,vector<int>&ans)
    {
        if(root==NULL)
            return;
        if(level==ans.size())
            ans.push_back(root->val);
            
        recur(root->right,level+1,ans);
        recur(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        recur(root,0,ans);
        return ans;
        
    }
};
