class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closestSum=nums[0]+nums[1]+nums[2];
        int difference=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    int sum=nums[i]+nums[j]+nums[k];
                    if(abs(target-sum)<abs(target-closestSum)){
                        closestSum=sum;
                    }
                }
            }
        }
        return closestSum;
        
    }
};//approach was hamko ek comapraison ke liye kuch find karna tha to give the closestsum so we used closestsum variable aur dekha ki agar absolute difference kam aaya to update karengee closest sum ko