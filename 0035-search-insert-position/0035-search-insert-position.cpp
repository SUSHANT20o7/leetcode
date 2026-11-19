class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int ans=nums.size();
        //int mid= low + (high-low)/2;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(nums[mid]>= target){
                ans=mid;
                high=mid-1;
            }
            else if(nums[mid]< target){
                low=mid+1;
            }
            else{ return 0;
            }
         
        }
        return ans;
        
    }
};