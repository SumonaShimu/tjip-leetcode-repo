//TC=O(n) n=size of string s
//MC=O(n)
class Solution {
public:
    bool isIsomorphic(string s, string t, int iterator=0) {
        unordered_map<char,char> m;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i]) && m[s[i]]!=t[i]) return false;
            m[s[i]]=t[i];
        }
    if(iterator==0) return isIsomorphic(t,s,1);
    return true;
    }
};
