//TC=o(n) ; n=length of lexicographically smallest string

class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string prefix="";
        sort(s.begin(),s.end());
        int n=s.size();
        string a=s[0]; //lexicographically first string after sort
        string b=s[n-1]; //last string after sorting

        for(int i=0;i<a.length();i++){ //checking chars of only first and last string
            if(a[i]==b[i]) prefix+=b[i];
            else break; //if any mismatch found then terminated
        }
        return prefix;
    }
};

