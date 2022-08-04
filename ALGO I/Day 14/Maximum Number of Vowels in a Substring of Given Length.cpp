class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int i=0,p=0;
        for(int r=0;r<n;r++)
        {
            if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u')
            {
                i++;
            }
            if(r>=k)
            {
                if(s[r-k]=='a' || s[r-k]=='e' || s[r-k]=='i' || s[r-k]=='o' || s[r-k]=='u')
                    i--;
            }
            p=max(p,i);
        }
        return p;
    }
};
