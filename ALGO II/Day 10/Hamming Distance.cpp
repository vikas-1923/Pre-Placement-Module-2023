class Solution {
public:
   int hammingWeight(int n){
    int sum=0;
    while(n>0){
        n=(n&(n-1));
        sum++;
    }
    return sum;
}
int hammingDistance(int x, int y) {
    return hammingWeight(x^y);
}
};
