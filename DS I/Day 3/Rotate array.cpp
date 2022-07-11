class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n=nums.size();
        if(n<=1 || k<=0)
            return;
        
        vector<int> temp(n);
        temp = nums;
        for(int i=0; i<n; i++){
            nums[(i+k)%n] = temp[i];
        }
    
        
    }
};
