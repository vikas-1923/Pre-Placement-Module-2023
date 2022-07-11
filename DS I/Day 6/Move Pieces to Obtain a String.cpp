class Solution {
public:
    bool canChange(string start, string target) {
        int fst = 0, nd = 0, rd = 0, rth = 0;
        for(auto i : start) { 
            if(i == 'L') 
                fst++;
            else if(i == 'R') 
                nd++;
        }
        for(auto i : target) { 
            if(i == 'L')
                rd++;
            else if(i == 'R') 
                rth++;
        }
        if(fst == rd  && nd == rth){ 
            vector<int> phy7;
            vector<int> phy9;
            for(int i = 0;i<start.size();i++){ 
                if(start[i] != '_') 
                    phy7.push_back(i);
            }
            for(int i = 0;i<start.size();i++){ 
                if(target[i] != '_') 
                    phy9.push_back(i);
            }
            bool b = 1;
            for(int i = 0;i<phy7.size();i++){ 
                if(start[phy7[i]] != target[phy9[i]])
                { b = 0;
                }
                else { 
                    if(start[phy7[i]] == 'L'){ 
                        if(phy7[i] < phy9[i]) 
                            b= 0;
                        
                    }else { 
                        if(phy7[i] > phy9[i]) 
                            b = 0;
                        
                    }
                }

            }
            if(b)
                return true;
            return false;
        }
        return false;
    }
};
