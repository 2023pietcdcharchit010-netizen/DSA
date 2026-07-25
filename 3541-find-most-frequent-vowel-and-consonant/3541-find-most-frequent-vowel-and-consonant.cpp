class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
// count freq of each character
        for(char ch : s){
            mp[ch]++;
        }

        int maxvowel=0;
        int maxconsonent=0;

        for(auto it : mp){
            char ch=it.first;
            int freq=it.second;

            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                maxvowel=max(maxvowel,freq);
            }
            else{
                maxconsonent=max(maxconsonent,freq);
            }
        }
        return maxvowel+maxconsonent;
    }
};