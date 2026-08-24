class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string result = "";

        for(int i = 0; i < s.length(); i++) {

            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if(st.top()==s[i]){
                st.pop();
                continue;
            }
            else {
                st.push(s[i]);
            }
        }

        while(!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }

        reverse(result.begin(), result.end());

        return result;
    }
};