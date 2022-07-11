class Solution {
public:
    int fib(int n) {
       int n1=0,n2=1,curr;
        if(n<=1)
            return n;
        for(int i=2;i<=n;i++)
        {   curr=n1+n2;
            n1=n2;
            n2=curr;
        }
        return curr;
    }
      
};
