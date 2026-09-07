class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int bestbuy=nums[0];
        int maxprofit=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>bestbuy){
                int profit=nums[i]-bestbuy;
                maxprofit+=profit;
            }
            bestbuy=nums[i];
        }
        return maxprofit;
    }
};