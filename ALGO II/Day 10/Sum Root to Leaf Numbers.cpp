class Solution {
public:
   void sumNum(TreeNode* root,int curNum,int &ans){
        if(root==NULL)
            return;
        curNum=curNum*10+root->val;
        if(root->left==NULL && root->right==NULL)
            ans+=curNum;
        sumNum(root->left,curNum,ans);
        sumNum(root->right,curNum,ans);
    }
    
    int sumNumbers(TreeNode* root) {
        int ans=0;
        sumNum(root,0,ans);
        return ans;
            
    }
};
