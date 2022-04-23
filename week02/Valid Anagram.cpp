//TC=O(N)
//SC=O(N)
class Solution {
public:
    bool isAnagram(string s, string t) {
    int n=s.size(),m=t.size();
    if(n!=m) return false;
    vector<int> ss(26,0),tt(26,0);
    for(int i=0;i<n;i++) ss[s[i]-'a']++;
    for(int i=0;i<m;i++) tt[t[i]-'a']++;
    if(ss==tt) return true;
    else return false;
    }
};
