//TC=O(N)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="") return 0;
        vector<int> count(256);

        int i=0;
        int n= s.size();
        int j=0;
        int maxLen=1;
        while(j<n and i<=j){ //sliding window
            if(count[s[j]]==0){ //if the occurance of the element is 0 then will increase occurance of the element & store the max length
                count[s[j]]++;
                j++;
                maxLen = max(j-i,maxLen);
            }
            else{  // else move the window
              count[s[i]]--;
                i++;
            }
        }
        return maxLen;
    }
};
