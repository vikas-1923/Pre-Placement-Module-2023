class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>m;
        map<char,int>n;
        bool flag=0;
        if(s.size()!=t.size())
            return false;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            n[t[i]]++;
        }
        for(int i=0;i<m.size();i++)
        {
            if(m[s[i]]!=n[s[i]])
                return false;
        }
        
        return true;
        
    }
};
