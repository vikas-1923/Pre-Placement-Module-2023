class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> pt(m,vector<int>(n,-1));
        
        m=m-1; 
        n=n-1;
        int rt=0,ml=0;
        while(rt<=m && ml<=n && head){
            for(int j=rt;j<=n && head!=NULL;j++){
                int temp=head->val;
                
        
                pt[rt][j]=temp;
                head=head->next;
            }
            rt++;
            for(int pl=rt;pl<=m && head!=NULL;pl++){
                int temp=head->val;
                
                
                pt[pl][n]=temp;
                head=head->next;
            }
            n--;
            if(rt<=m){
                for(int kr=n;kr>=ml && head!=NULL;kr--){
                    int temp=head->val;
                
                    
                    pt[m][kr]=temp;
                    head=head->next;
                } m--;
            }
            if(ml<=n){
                for(int mx=m;mx>=rt && head!=NULL;mx--){
                    int temp=head->val;
                
                
                    pt[mx][ml]=temp;
                    head=head->next;
                }
                ml++;
            }
            
        }
        return pt;
    }
};
