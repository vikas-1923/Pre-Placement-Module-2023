class Solution {
public:
     vector<int> searchRange(vector<int>& arr, int key) {
        vector<int> ans;
        ans.push_back(findFirst(arr , key));
        ans.push_back(findLast(arr , key));
        return ans;
     }
   int findFirst(vector<int> arr , int key){
        int n = arr.size();
        int low = 0 , high = n-1;
        int res = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==key){
                res = mid;
                high = mid-1;
            }
            else if(key<arr[mid]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        
        return res;
    }
    int findLast(vector<int> arr , int key){
        int n = arr.size();
        int low = 0 , high = n-1;
        int res = -1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(arr[mid]==key){
                res = mid;
                low = mid+1;
            }
            else if(key<arr[mid]){
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        
        return res;
    
   
    }
       

};
