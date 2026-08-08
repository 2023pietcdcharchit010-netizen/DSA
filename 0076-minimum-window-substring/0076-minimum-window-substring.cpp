class Solution {
public:
    bool fun(vector<int>& have,vector<int> & need){
        for(int i=0;i<256;i++){
            if(have[i]<need[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int low=0;
        int res=INT_MAX;
        int start=-1;

        if(n<m){
            return "";
        }
        vector<int> have (256,0);
        vector<int> need (256,0); 
        // store frequency of characters in t
        for(int i=0; i < m;i++){
            need[t[i]]++;
        }

        for(int high=0;high<s.length();high++){
            have[s[high]]++;

            while(fun(have,need)){
                int len=high-low+1;

            // store minimun window
                if(len<res){
                    res=len;
                    start=low;
                }
                //remove left character
                have[s[low]]--;
                low++;
            }
        }
        if(start==-1){
            return "";
        }

        return s.substr(start,res);
    }
};