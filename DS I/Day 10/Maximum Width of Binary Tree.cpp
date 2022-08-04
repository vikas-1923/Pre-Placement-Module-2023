class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        long long ans=0;
        while(!q.empty())
        {
            long long size=q.size();
            long long minn=q.front().second;
            long long first,last;
            for(long long i=0;i<size;i++)
            {
                long long cur=q.front().second-minn;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0)
                    first=cur;
                if(i==size-1)
                    last=cur;
                if(node->left)
                    q.push({node->left,cur*2+1});
                if(node->right)
                    q.push({node->right,cur*2+2});
                
                ans=max(ans,last-first+1);
            }
        }
        return ans;
        
    }
};
