class SmallestInfiniteSet {
public:
    set<int>pqr;
    SmallestInfiniteSet() {
        pqr.clear();
        for(int i=1;i<=1000;i++)
            pqr.insert(i);
        
    }
    
    int popSmallest() {
        int lss=*pqr.begin();
        pqr.erase(pqr.begin());
        return lss;
    }
    
    void addBack(int num) {
        pqr.insert(num);
        
    }
};
