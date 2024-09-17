___________________________Code_____________________________________

//complexity: O(nlogn)


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};
__________________________Explanation_______________________________

sorted the array and returned (k-1) th element.
