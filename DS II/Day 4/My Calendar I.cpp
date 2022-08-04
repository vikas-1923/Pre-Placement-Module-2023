class MyCalendar {
public:
     vector<pair<int,int>>res;
     
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
       
        for(auto it:res)
        {
            if(!(it.second<start || it.first>end-1))
            {
                return false;
            }
           
            
        }
         res.push_back({start,end-1});
        return true;
        
    }
};
