class Solution {
public:
    char repeatedCharacter(string s) {
      vector<int>solve(26,0);
        
        for(auto it:s)
        {
            int final=it-97;
            solve[final]++;
            if(solve[final]==2)
            {
                return it;
            }
        }
        return 'solve';
    }
};
