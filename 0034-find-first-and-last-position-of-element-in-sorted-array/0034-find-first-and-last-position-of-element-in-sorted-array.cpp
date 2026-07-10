class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1,First=-1,last=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                First=mid;
                j=mid-1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                last=mid;
                i=mid+1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        vector<int> a(2);
        a[0]=First;
        a[1]=last;
        return a;
    }
};