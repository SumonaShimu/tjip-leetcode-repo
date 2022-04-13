___________________________Code_____________________________________

//complexity: O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++) freq[nums[i]]++;
        for(auto it:freq) if(it.second==1) return it.first;
        return 0;
    }
};
__________________________Explanation_______________________________

used frequency map(unordered). checked whose frequency is 1. thats the ans.
