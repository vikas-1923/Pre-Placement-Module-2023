class Solution {
public:
    int fillCups(vector<int>& amount) {
       sort(amount.begin(),amount.end());
        int pq=amount[0];
        int rs=amount[1];
        int yt=amount[2];
        int finall=pq+rs+yt;
        
        if(pq+rs>yt)
            return finall/2+finall%2;
        if(pq==0 and rs==0)
            return yt;
        else
            return yt;
        
    }
};
