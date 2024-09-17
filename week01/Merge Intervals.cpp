___________________________Code_____________________________________

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        int start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<=end) end=max(intervals[i][1],end);
            else {
                merged.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        merged.push_back({start,end});
        return merged;
    }
};
__________________________Explanation_______________________________

 sorted the intervals according to the start values. checked if the
 current end time is greater or equal to previous starting time. if
 yes then they will be in same intervals. so, the end value will be
 the maximum of present and previous end time.
 else both of the start and end value will be updated.
