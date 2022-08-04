class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>s;
        int resss=-1;
        
        for(int i=0;i<nums.size();i++)
        {   int add=0;
             int r=nums[i];
            while(r!=0)
            {
                add=add+r%10;
                r=r/10;
            }
        if(s.find(add)==s.end())
            s[add]=i;
         
        else
        {
            resss=max(nums[i]+nums[s[add]],resss);
            if(nums[i]>nums[s[add]])
                s[add]=i;
        }
        }
       return resss;
    }
};
