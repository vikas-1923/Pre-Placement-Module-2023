class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>q;
        q.push(root);
 
         
        while(!q.empty())
        {
            
            int soll=INT_MIN;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode*temp=q.front();
                q.pop();
                if(soll<temp->val)
                {soll=temp->val;
                }
                if(temp->left!=NULL)
                {q.push(temp->left);
                }
                if(temp->right!=NULL)
                { q.push(temp->right);
                }
            }
            res.push_back(soll);
           
        }
         
        return res;
        
        
    }
};
