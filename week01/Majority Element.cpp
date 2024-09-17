___________________________Code_____________________________________

//complexity: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<long long int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        if(freq[nums[i]]>(nums.size()/2)) return (nums[i]);
        }
        return 0;
    }
};
__________________________Explanation_______________________________

Used frequency map. As the majority element is the element that appears
more than (n/2) times. so just checked whose frequency is greater than (n/2).
