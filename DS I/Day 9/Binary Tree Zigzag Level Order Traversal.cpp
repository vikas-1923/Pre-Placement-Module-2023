class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
       
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool leftright=true;

        while(!q.empty())
        {int size=q.size();
         vector<int>level(size);
         for(int i=0;i<size;i++)
         {
             TreeNode *node=q.front();
             q.pop();
             int ind=(leftright)?i:(size-1-i);
             level[ind]=node->val;
             if(node->left )
             {
                 q.push(node->left);
             }
             if(node->right)
             {
                 q.push(node->right);
             }
           
                 
         }
         leftright=!leftright;
         ans.push_back(level);
        }

        return ans;
        
    }
};
