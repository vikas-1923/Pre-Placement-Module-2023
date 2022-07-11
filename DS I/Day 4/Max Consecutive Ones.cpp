class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int rt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 )
            {
                sum++;
            }
            else if (nums[i]==0)
            {
                rt=max(rt,sum);
                sum=0;
            }
            
        }
        rt=max(rt,sum);
        return rt;
    }
};
