class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> Unique;
        int result = 0;
        int Neg=INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]>0){
                Unique.insert(nums[i]);
            }
        }

        for(int x : Unique){
            result+=x;
        }

        if(result == 0 ){
            return *max_element(nums.begin(),nums.end());
        }

        return result;
    }
};