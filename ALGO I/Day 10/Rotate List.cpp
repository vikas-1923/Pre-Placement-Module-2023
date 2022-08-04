class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
         if(head==NULL) return NULL;
        int n=1;
        ListNode* temp=head;
        while(temp->next){
            temp=temp->next;
            n++;
        }
        k=k%n;
        temp->next=head;
        temp=head;
        int val=n-k-1;
        while(val--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
