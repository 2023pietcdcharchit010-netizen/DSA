class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        if(n==1) return nums[0];
        while(i<=j){
            int mid=i+(j-i)/2;
            if(mid==0 && nums[0]!=nums[1])
            return nums[mid];
            if(mid==n-1 && nums[n-1]!=nums[n-2])
            return nums[mid];

            if(nums[mid-1]!=nums[mid]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){
                if(nums[mid-1]==nums[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                if(nums[mid-1]==nums[mid]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};