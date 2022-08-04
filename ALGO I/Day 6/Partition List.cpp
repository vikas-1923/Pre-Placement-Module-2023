class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
         ListNode*temp=head;
        ListNode*ans=head;
       vector<int>v;
       vector<int>l;
        while(temp)
        {
            if(temp->val<x)
            {
                v.push_back(temp->val);
                
            }
            else
            {
                l.push_back(temp->val);
            }
            temp=temp->next;
        }
        for(auto it :v)
        { 
            ans->val=it;
            ans=ans->next;
            
        }
    for(auto it:l)
    {
        ans->val=it;
        ans=ans->next;
    }
        return head;
        
    }
};
