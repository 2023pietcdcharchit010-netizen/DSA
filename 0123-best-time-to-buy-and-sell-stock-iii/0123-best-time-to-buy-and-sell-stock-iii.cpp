class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy1=nums[0];
        int sell1=0;
        int buy2=nums[0];
        int sell2=0;

        for(int i=1;i<nums.size();i++){
            buy1=min(buy1,nums[i]);
            sell1=max(sell1,nums[i]-buy1);

            buy2=min(buy2,nums[i]-sell1);
            sell2=max(sell2,nums[i]-buy2);
        }

        return sell2;
    }
};