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
    int rangeSumBST(TreeNode* root, int low, int high) {
        traverse(root);
        
        int sum=0;
       for(int i=0;i<v.size();i++)
       {
           if(v[i]>=low && v[i]<=high)
           {
               sum=sum+v[i];
           }
       }
        return sum;
    }
};
