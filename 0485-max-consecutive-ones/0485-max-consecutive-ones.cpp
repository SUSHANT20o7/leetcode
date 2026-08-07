class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                count++;
                maxcount=max(maxcount,count);
            }
            else if(nums[i]==0){
                count=0;
            }
        }
        
        return maxcount;
    }
};