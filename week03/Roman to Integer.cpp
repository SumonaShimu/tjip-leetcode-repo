//TC=O(N) N= SIZE OF S
//MC=O(1)
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> val;
        int int_val=0;
        val['I']= 1 ;
        val['V']= 5 ;
        val['X']= 10 ;
        val['L']= 50 ;
        val['C']= 100 ;
        val['D']= 500 ;
        val['M']= 1000 ;
        for(int i=0;i<s.size();i++)
        {
            if( i<s.size()-1 && val[s[i]]<val[s[i+1]] ) {
                int_val += (val[s[i+1]] - val[s[i]]);
                i++;
                }
            else int_val+= val[s[i]];
        }
        return int_val;
    }
};
