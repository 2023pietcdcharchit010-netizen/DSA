class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        int start1=intervals[0][0];
        int end1=intervals[0][1];
        for(int i=1;i<n;i++){
            int start2=intervals[i][0];
            int end2=intervals[i][1];
            if(end1>=start2){   // overlapps
                end1=max(end1,end2);
                continue;
            }
            else{    // does not overlapps
                res.push_back({start1,end1});

                // start a new intervals
                start1=start2;
                end1=end2;
            }
        }

        //Add the last interval
        res.push_back({start1,end1});
        return res;
    }
};