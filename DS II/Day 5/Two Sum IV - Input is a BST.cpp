class Solution {
public:
    vector<int>v;
    void traverse(TreeNode*root)
    {
      if(!root)
          return;
      traverse(root->left);
      v.push_back(root->val);
        traverse(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        int i=0,j=v.size()-1;
        while(i<j)
        {
            if(v[i]+v[j]==k)
                return true;
            else if((v[i]+v[j])>k)
                j--;
            else
                i++;
        }
        return false;
        
    }
};
