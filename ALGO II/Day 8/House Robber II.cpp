class Solution {
public:
      int ans(vector<int>& v){
        int prev = v[0];
        int prev2 = 0;
        
        for(int i=1;i<v.size();i++){
            int pick = v[i];
            if(i>1) pick += prev2;
            int notPick = 0 + prev;
            
            int curr = max(pick,notPick);
            prev2 = prev;
            prev = curr;
        }
        
        return prev;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        
        vector<int> v1,v2;
        for(int i=0;i<n;i++){
            if(i!=0) v1.push_back(nums[i]);
            if(i!=n-1) v2.push_back(nums[i]);
        }
        
        return max(ans(v1),ans(v2));
    }
};
