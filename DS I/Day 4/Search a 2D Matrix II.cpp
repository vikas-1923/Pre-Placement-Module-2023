class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int j=matrix[0].size()-1;
        int i=0;
        while(i<r and j>=0)
        {
            if(matrix[i][j]==target)
                return true;
            
            else if(target<matrix[i][j])
                j--;
            else
                i++;
        }
        return false;
    }
};
