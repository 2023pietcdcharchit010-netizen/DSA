class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        // calculate total sum
        for(int num : nums){
            sum+=num;
        }
        int left=0;

        for(int i=0;i<nums.size();i++){
            
            int right=sum-nums[i]-left;

            if(left==right){
                return i;
            }

            // Add current element to left
            left+=nums[i];
        }
        return -1;
    }
};