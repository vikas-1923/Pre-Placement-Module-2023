class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       vector<vector<int>>ress;
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int>st;
            for(int j=0;j<grid.size();j++)
            {
                st.push_back(grid[j][i]);
            }
            ress.push_back(st);
        }
        int anss=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<ress.size();j++)
            {
                if(grid[i]==ress[j])
                {
                    anss++;
                }
            }
        }
        return anss;
    }
};
