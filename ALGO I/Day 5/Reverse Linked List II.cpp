class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        ListNode* dump=head;
        vector<int>v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin()+left-1,v.end()-(v.size()-right));
        int i=0;
        while(dump!=NULL){
            dump->val=v[i++];
            dump=dump->next;
        }
        return head;
    }
};
