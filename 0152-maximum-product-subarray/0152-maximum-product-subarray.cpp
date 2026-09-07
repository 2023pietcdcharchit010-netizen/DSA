class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend=nums[0];
        int minend=nums[0];
        int maxprodsum=nums[0];
        for(int i=1;i<nums.size();i++){
            // make possible outcome
            int v1=nums[i];
            int v2=nums[i]*maxend;
            int v3=nums[i]*minend;

            maxend=max(v1,max(v2,v3));
            minend=min(v1,min(v2,v3));
            maxprodsum=max(maxprodsum,max(maxend,minend));
        }
        return maxprodsum;
    }
};