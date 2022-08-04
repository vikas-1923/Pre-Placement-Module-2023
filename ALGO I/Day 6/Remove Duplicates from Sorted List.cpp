class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*l1=head;
        if(head==NULL || head->next==NULL)
            return head;
        
        
        while(l1->next)
        {
            if(l1->val==l1->next->val)
            {
                l1->next=l1->next->next;
                
            }
            else
            {
                l1=l1->next;
            }
        }
        return head;
        
    }
};
