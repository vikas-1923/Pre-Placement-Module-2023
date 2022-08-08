class Solution {
public:
    int countCollisions(string directions) {
      int i, R = 0, count = 0;
        
        for (i = 1; i < directions.size(); ++i){
            
            if (directions[i - 1] == 'R' && directions[i] == 'R')
                ++R;
            
            else if (directions[i - 1] == 'R' && directions[i] == 'L'){
                count += R + 2;
                directions[i] = 'S';
                R = 0;}
            
            else if (directions[i - 1] == 'R' && directions[i] == 'S'){
                count += R + 1;
                R = 0;}
            
            else if (directions[i - 1] == 'S' && directions[i] == 'L'){
                ++count;
                directions[i] = 'S';}}
        
        return count;
    }
};
