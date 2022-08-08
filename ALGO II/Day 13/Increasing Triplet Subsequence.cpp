class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        
        int low = nums[0], high = INT_MAX;
        for (int i = 1; i < n; i++) {
            if (nums[i] > low && nums[i] > high)
                return true;
            if (nums[i] > low)
                high = nums[i];
            else low = nums[i];
        }
        
        return false;
    }
};
