class Solution {
public:
    void flatten(TreeNode* root) {
         if(root==NULL)
            return;
        stack<TreeNode*>stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode*currentNode=stack.top();
            stack.pop();
            if(currentNode->right!=NULL)
                stack.push(currentNode->right);
             if(currentNode->left!=NULL)
                stack.push(currentNode->left);
             if(!stack.empty())
                 currentNode->right=stack.top();
            currentNode->left=NULL;
        }
        
    }
};
