class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
      map<int,int>p;
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            p[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(p[nums2[i]]>0)
            {
                ans.push_back(nums2[i]);
            }
            p[nums2[i]]--;
        }
        return ans;
    }
};
