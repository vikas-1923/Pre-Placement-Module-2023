class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
         
        if(head == NULL || head -> next == NULL) 
        {
            return head;
        }
            
        ListNode* res; 
        res= head->next; 
        
        head->next = swapPairs(head->next->next); 
        res->next = head; 
        
        return res; 
        
    }
};
