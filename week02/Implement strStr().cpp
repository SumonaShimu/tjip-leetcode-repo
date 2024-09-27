//TC=O(N)
//SC=O(1)
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;haystack[i];i++){
            if(haystack[i]==needle[0]){ //checking first char of needle
                int s=1,j=i+1;
                while(haystack[j] && needle[s] && (haystack[j]==needle[s])) //checking the rest of the chars in haystack
                    s++,j++;
                if(s==needle.size()) return i;
            }
        }
        return -1;
    }
};
