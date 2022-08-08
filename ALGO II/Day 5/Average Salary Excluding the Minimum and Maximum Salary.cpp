class Solution {
public:
    double average(vector<int>& salary) {
        
       double sum=0;
      sort(salary.begin(),salary.end());
        double n=salary.size();
        for(int i=1;i<n-1;i++)
        {
            sum=sum+salary[i];
        }
        double avg = sum/(n-2);
        
        return avg;
    }
};
