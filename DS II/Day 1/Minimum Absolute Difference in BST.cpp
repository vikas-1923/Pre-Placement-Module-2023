class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int mini=INT_MAX;;
        int c=0;
        for(int i=1;i<v.size();i++){
            c=abs(v[i]-v[i-1]);
            mini=min(mini,c);
        }
        return mini;
    }
};
