class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        unordered_map<int,int> mp;
        stack<int> st;

        for(int i=n-1;i>=0;i--){
            //Pop small and equal elements
            while(!st.empty() && st.top()<= nums2[i]){
                st.pop();
            }
            // Assign Next greater element
            if(st.empty()){
                mp[nums2[i]]=-1;
            }
            else{
                mp[nums2[i]]=st.top();
            }
            //push current element
            st.push(nums2[i]);
        }

        vector<int> result;
        for(int num:nums1){
            result.push_back(mp[num]);
        }
        return result; 
    }
};