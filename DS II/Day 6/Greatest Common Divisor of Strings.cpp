class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.size();
        int b=str2.size();
        int n= __gcd(a,b);
        
        if(str1+str2==str2+str1)
            return str1.substr(0,n);
        
        return "";
    }
};
