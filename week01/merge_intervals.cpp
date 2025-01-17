// TC: O(NlogN)
// MC: O(N)

class Solution
{
public:
    static bool cmp(vector<int>&a, vector<int>&b)
    {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        sort(intervals.begin(), intervals.end(), cmp);
        vector<vector<int> > merged;
        merged.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] <= merged.back()[1])
            {
                merged.back()[1] = max(merged.back()[1], intervals[i][1]);
            }
            else merged.push_back(intervals[i]);
        }
        return merged;
    }
};
