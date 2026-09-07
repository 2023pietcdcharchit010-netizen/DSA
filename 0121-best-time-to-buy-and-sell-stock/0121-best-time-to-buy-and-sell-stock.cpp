class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minprices=nums[0];
        int maxprofit=0;
        for(int i=1;i<nums.size();i++){
            minprices=min(minprices,nums[i]);
            int profit=nums[i]-minprices;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;   
    }
};