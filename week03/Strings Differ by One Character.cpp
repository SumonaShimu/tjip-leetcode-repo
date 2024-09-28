//TC=O(n*l^2)
//SC=O(nl)

class Solution {
public:
    bool differByOne(vector<string>& dict) {
        unordered_map<string,int> map;
        int n=dict.size(); //num of strings in dict
        int l=dict[0].size(); //length of each string

        for(int i=0;i<n;i++)
        {
            string s=dict[i];

            for(int j=0;j<l;j++){
                char ch=s[j];
                s[j]='_';
                if(map.count(s)) return true;
                map[s]++;
                s[j]=ch;
            }
        }
        return false;
    }
};
