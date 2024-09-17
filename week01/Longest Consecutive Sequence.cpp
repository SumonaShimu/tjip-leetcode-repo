___________________________Code_____________________________________

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end()); //erasing the duplicate values
        int count=1,ans=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==(nums[i-1]+1)) count++;
            else {
                ans=max(count,ans);
                count=1;
            }
        }
        ans=max(count,ans);
        return ans;
    }
};
__________________________Explanation_______________________________

sorted nums and made it containing only unique values. now checked if
the previous value is 1 more then the present value. if yes then count++. then
the maximum count value is the required longest sequence.
