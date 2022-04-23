//TC=O(nlogn)
class Solution {
public:
    bool static comp(string &x,string &y)
    {
        return (x+y)>(y+x);
    }

    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string> v;
        for(auto num:nums) v.push_back(to_string(num));
        sort(v.begin(),v.end(),comp); //sorting such a way that it forms the bigger value after concatenation
        for(auto it:v) ans+=it;
        while(ans[0]=='0' && ans.length()>1)
        {
            ans.erase(0,1);
        }
        return ans;
    }
};
