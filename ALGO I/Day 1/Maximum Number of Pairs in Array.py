class Solution:
    def numberOfPairs(self, nums: List[int]) -> List[int]:
        pq=[]

        rx=0
        ress=[]
        mp=0
        for i in nums:
            if i not in pq:
                pq.append(i)
        for i in pq:
            if nums.count(i)>1:
                ux=nums.count(i)
                h=ux//2 
                mp+=h 
            if nums.count(i)%2!=0:
                rx+=1
    
        
        ress.append(mp)
        ress.append(rx)
        return ress
        
