class Solution {
public:
    int ans;
    void subString(string input)
    {
        int n = input.length();
        for(int i=0;i<n;i++)
        {
            map<char,int> m;
            for(int j=i;j<n;j++)
            {
                m[input[j]]++;
                int Max = 0,Min = INT_MAX;
                if(m.size()>1){
                for(auto &i:m){
                    Max = max(Max,i.second);
                    Min = min(Min,i.second);
                }
                ans += Max-Min;
                }
            }
        }
    }
    int beautySum(string input) {
        subString(input);
        return ans;
    }
};
