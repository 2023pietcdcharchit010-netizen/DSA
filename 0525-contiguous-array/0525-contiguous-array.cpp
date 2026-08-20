class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int one=0;
        int zero=0;
        int result=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            zero++;
            else
            one++;

            int diff=zero-one;
            if(diff==0){
                result=max(result,i+1);
                continue;
            }

            if(mp.find(diff)==mp.end()){ //does't presnet key in hashmap
                mp[diff]=i;
            }
            else{
                int idx=mp[diff];
                int len=i-idx;
                result=max(len,result);
            }
        }
        return result;
    }
};