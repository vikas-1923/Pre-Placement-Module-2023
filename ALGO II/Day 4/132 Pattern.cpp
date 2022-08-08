class Solution {
public:
    bool find132pattern(vector<int>& nums) {
     int n3 = INT_MIN;
       int n = nums.size();
        stack<int>s;
        for(int i = n-1;i>=0;i--)
        {
            if(nums[i]<n3)
                return true;
            else
            {
                while(!s.empty() && nums[i]>s.top())
                {
                    n3 = s.top();
                    s.pop();
                }
            }
            s.push(nums[i]);
        }
        return false;
        
    }
};
