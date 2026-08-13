class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int minsum=nums[0];
        int result=abs(nums[0]);

        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=maxsum + nums[i];
            int v3=minsum + nums[i];

            maxsum=max(v1,v2);
            minsum=min(v1,v3);

            result=max(result,max(abs(maxsum),abs(minsum)));
        }
        return result;
    }
};