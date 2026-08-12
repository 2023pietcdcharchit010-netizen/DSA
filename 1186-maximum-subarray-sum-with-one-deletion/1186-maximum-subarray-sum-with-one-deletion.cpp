class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();

        int nopower = nums[0];  // no deletion
        int power = 0;          // one deletion
        int result = nums[0];

        for (int i = 1; i < n; i++) {

            int v1 = nums[i];             // start new
            int v2 = nopower + nums[i];   // continue
            int v3 = nopower;             // delete current
            int v4 = power + nums[i];     // deletion already done

            result = max(result, max(max(v1, v2), max(v3, v4)));

            nopower = max(v1, v2);
            power = max(v3, v4);
        }

        return result;
    }
};