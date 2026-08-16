class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int n=nums.size();
        int sum=0;
        int res=0;
        for(int i=0;i<n;i++){
            //prefix sum
            sum+=nums[i];
            //Remender of Prefix sum
            int rem=sum%k;
            //if negative number then convert into positive remender
            if(rem<0){
                rem+=k;
            }
            //Check id remainder alredy exsists
            if(mp.find(rem)!=mp.end()){
                res+=mp[rem];
            }
            //Increse the freq of current remainder
            mp[rem]++;
        }
        return res;
    }
};