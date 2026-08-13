class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxsum=nums[0];
        int minsum=nums[0];
        int maxcurr=nums[0];
        int mincurr=nums[0];
        int total=nums[0];

        for(int i=1;i<nums.size();i++){
            // max subarray
            maxcurr=max(maxcurr+nums[i],nums[i]);
            maxsum=max(maxsum,maxcurr);

            // min subarray
            mincurr=min(mincurr+nums[i],nums[i]);
            minsum=min(minsum,mincurr);

            //sum of entire array
            total+=nums[i];
        }
        //if all elements are negative 
        if(maxsum<0){
            return maxsum;
        }
        // Maximun circular sub array
        int circularsum= total - minsum;

        // compare normal and circular subarray

        return max(maxsum,circularsum);
    }
    
};