class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>q;
        
        q.push(root);
        if(root==NULL)
            return ans;
        
        while(!q.empty())
        {int size=q.size();
         vector<int>level(size);
         for(int i=0;i<size;i++)
         {
             TreeNode *node=q.front();
             q.pop();
             
             level[i]=node->val;
             
             if(node->left!=NULL )
             {
                 q.push(node->left);
             }
             if(node->right!=NULL)
             {
                 q.push(node->right);
             }
             
                 
         }
         ans.push_back(level);
         
        }
        reverse(ans.begin(),ans.end());

        return ans;
        
    }
};
