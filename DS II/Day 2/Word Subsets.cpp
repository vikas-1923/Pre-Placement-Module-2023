class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
         int n = words1.size();
        int m = words2.size();
        
        vector<string> ans;
        map<char,int> mp1;
        
        for(int i=0 ; i<m ; i++){
            string s = words2[i];
            int x = s.size();
            map<char,int> mp;
            for(int j=0 ; j<x ;j++){
                mp[s[j]]++;
            }
            
            for(auto it:mp){
                if(mp1.find(it.first)==mp1.end()){
                    mp1[it.first] = it.second;
                }
                else{
                    mp1[it.first] = max(it.second , mp1[it.first]);
                }
            }
        }
        
        for(int i=0 ; i<n ; i++){
            map<char,int> mp2;
            string s = words1[i];
            int x = s.size();
            for(int j=0 ; j<x ; j++){
                mp2[s[j]]++;
            }
            
            bool yes = true;
            for(auto it:mp1){
                if(mp2.find(it.first)==mp2.end()){
                    yes = false;
                    break;
                }
                else{
                    if(it.second > mp2[it.first]){
                        yes = false;
                        break;
                    }
                }
            }
            
            if(yes){
                ans.push_back(s);
            }
        }
        
        return ans;
    }
};
