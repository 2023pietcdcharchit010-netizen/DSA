class Solution {
public:
    int findGCD(vector<int>& nums) {
       int n=nums.size();
       int ans=INT_MAX;
       for(int i=0;i<n;i++){
        if(nums[i]<ans){
            ans=nums[i];
        }
       }
       int ans2=INT_MIN;
       for(int i=0;i<n;i++){
        if(nums[i]>ans2){
            ans2=nums[i];
        }
       }
       return gcd(ans,ans2); 
    }
};