class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;

        mp[0]=1;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            //Current PS
            sum+=nums[i];
            //Required previous PS
            int Required=(sum-k);


            if(mp.find(Required)!=mp.end()){
                count+=mp[Required];
            }
            mp[sum]++;
        }
        return count;
    }
};