class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> rankArr= arr;
    sort(rankArr.begin(), rankArr.end());
    
    map<int, int> m;
    int rank = 1;
    for (int i=0; i<rankArr.size(); i++) {
        m[rankArr[i]] = rank;
        if (i<rankArr.size()-1 && rankArr[i] != rankArr[i+1]) {
            rank++;
        }
    }
    
    for (int i=0; i<arr.size(); i++) {
        arr[i] = m[arr[i]];
    }

    return arr;
        
        
    }
};
