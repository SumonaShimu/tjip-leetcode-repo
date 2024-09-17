___________________________Code_____________________________________

//complexity: O(n)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> in_range(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0 && nums[i]<=n)
            in_range[nums[i]]=1;
        }
        for(int i=1;i<n+1;i++)
        {
            if(i>0 && in_range[i]==0) return i;

        }
        return n+1;
    }

};
__________________________Explanation_______________________________

let, n= size of nums array. if the array contains all the values from 1 to n
then the ans is n+1. otherwise we have our ans within n.
so, we are tracking which values nums array contains between 1 to n and keeping them in in_range vector.
then just ran a loop to check the missing positive value.
