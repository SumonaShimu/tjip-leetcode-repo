___________________________Code_____________________________________

//complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(seen.count(rem)) //if remaining value exists
            {
                return{seen[rem],i};
            }
           seen[nums[i]]=i;
        }
        return {};
    }
};

__________________________Explanation_______________________________

Traversing the nums array and storing them in seen(map). If the remaining
value(rem=target-current) is already traversed before then the ans is the
position of current & remaining value.
