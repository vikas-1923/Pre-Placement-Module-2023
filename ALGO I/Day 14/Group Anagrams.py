class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        a=[]
        p=[]
        d=[]
        for i in strs:
            a.append(sorted(i))
        for i in a:
            if i not in d:
                d.append(i)
        for i in d:
            g=[]
            for j in range(0,len(a)):
                if a[j]==i:
                    g.append(strs[j])
            p.append(g)
        return p
