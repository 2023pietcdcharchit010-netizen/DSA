class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            if(a[0] == b[0])
                return a[1] > b[1];

            return a[0] < b[0];
        });

        int n = intervals.size();

        int end1 = intervals[0][1];
        int result = 1;

        for(int i = 1; i < n; i++) {

            int end2 = intervals[i][1];

            // Current interval is covered
            if(end1 >= end2) {
                continue;
            }

            // Current interval is not covered
            result++;

            end1 = end2;
        }

        return result;
    }
};