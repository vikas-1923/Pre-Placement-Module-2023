class Solution {
public:
    int dp[1001][1001];
    bool solve(string s1,string s2,string s3,int n,int m,int len)
    {
        if(len==0)
            return 1;
        if(dp[n][m]!=-1)
            return dp[n][m];
        int a,b;
        a=b=0;
        if(n-1>=0 and s1[n-1]==s3[len-1])
            a=solve(s1,s2,s3,n-1,m,len-1);
        if(m-1>=0 and s2[m-1]==s3[len-1])
            b=solve(s1,s2,s3,n,m-1,len-1);
        return dp[n][m]=a or b;
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length();
        int m=s2.length();
        int len=s3.length();
        if(n+m!=len)
            return 0;
        dp[n][m];
       
        memset(dp,-1,sizeof(dp));
        
        return solve(s1,s2,s3,n,m,len);
        
    }
};
