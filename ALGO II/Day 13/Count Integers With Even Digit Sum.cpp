class Solution {
public:
    
    int sum(int no)
    {
        if(no==0)
        {
            return 0;
        }
        
        return (no%10) + sum(no/10);
    }
    int countEven(int num) {

       int count=0;
        for(int i=1;i<=num;i++)
        {
            if(sum(i)%2==0)
            {
                count++;
            }
        }
        return count;
    }
};
