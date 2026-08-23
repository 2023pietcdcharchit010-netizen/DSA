class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList,vector<vector<int>>& secondList) {
        
        int n = firstList.size();
        int m = secondList.size();

        vector<vector<int>> result;

        int i = 0;
        int j = 0;

        while(i < n && j < m) {

            int start1 = firstList[i][0];
            int end1 = firstList[i][1];

            int start2 = secondList[j][0];
            int end2 = secondList[j][1];

            // Find intersection
            int A = max(start1, start2);
            int B = min(end1, end2);

            if(A <= B) {
                result.push_back({A,B});
            }

            // Move the interval that finishes first
            if(end1 <= end2) {
                i++;
            }
            else {
                j++;
            }
        }

        return result;
    }
};