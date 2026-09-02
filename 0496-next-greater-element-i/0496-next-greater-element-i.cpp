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
        int m=nums1.size();
        for(int i=0;i<m;i++){
            result.push_back(mp[nums1[i]]);
        }
        return result; 
    }
};