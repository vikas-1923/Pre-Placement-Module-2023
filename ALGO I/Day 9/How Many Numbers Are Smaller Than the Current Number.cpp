class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
          map<int, int> res;
        for(int i=0; i<nums.size(); i++){
            res[nums[i]]++;
        }
        
     
        for(int i=0; i<nums.size(); i++){
            auto it = res.find(nums[i]);     
            
            int countSmaller = 0;
            for(auto itr = res.begin(); itr!=it; itr++){ 
                countSmaller += itr->second;       
            }
            nums[i] = countSmaller; 
            
        }
        
        return nums;
        
        
    }
};
