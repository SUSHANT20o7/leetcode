class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0;
        int cnt2=0;
        int el1=0,el2=0;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && nums[i]!=el2){
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && nums[i]!=el1){
                el2=nums[i];
                cnt2=1;
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }//niche ka sab verification hai
        vector<int> ls;//answer show kisme karta thats why i created this
        cnt1=0;
        cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i]){
                cnt1++;
            }
           else if(el2==nums[i]){
                cnt2++;
            }

        }
        int mini=(nums.size())/3 +1;
        if(cnt1 >=mini){
            ls.push_back(el1);
        }
        if(cnt2>=mini){
            ls.push_back(el2);
        }
        return ls;
        
    }
};