class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        vector<vector<int>> res;

        bool insert = false;

        int start = newInterval[0];
        int end = newInterval[1];

        for (int i = 0; i < intervals.size(); i++) {

            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

            // New interval comes before current interval
            if (insert == false && end < start2) {

                res.push_back({start, end});
                insert = true;

                res.push_back(intervals[i]);
            }

            // Overlap
            else if (start2 <= end && end2 >= start) {

                start = min(start, start2);
                end = max(end, end2);
            }

            // Current interval comes before new interval
            else {
                res.push_back(intervals[i]);
            }
        }

        // New interval is still not inserted
        if (insert == false) {
            res.push_back({start, end});
        }

        return res;
    }
};