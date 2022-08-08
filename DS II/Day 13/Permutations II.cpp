class Solution {
public:
vector<vector<int>> ans ;
    
    void helper( vector<int> &nums, int cnt, int n ){
        
        // If cnt == nums.size we have got our one combination 
        // Push it inside our answer 
        if( cnt == n ) {
            ans.push_back( nums ) ;
            return ;
        }
        
        unordered_set<int> s ;      // Set ensures that one element is placed once at every ith position  
        for( int i=cnt ; i<n ; i++ ){
            
            // If we have used the number at this ith position previously then just ignore this and continue to next number 
            if( s.find(nums[i]) != s.end() )  
                continue ;  
            else s.insert(nums[i]);      // If we have not used the number then insert it for next verification
            
            swap( nums[i], nums[cnt] );       // Create a combination 
            helper( nums, cnt+1, n ) ;        
            swap( nums[i], nums[cnt] );       
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n = nums.size() ;
        helper( nums, 0, n);
        return ans ;
    }
};
