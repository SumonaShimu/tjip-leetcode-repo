___________________________Code_________________________________________

//complexity: O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long int ans=1,zero=0;
        vector<int> prod;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0) ans*=nums[i];
            else zero++;
        for(int i=0;i<nums.size();i++)
        {
            if(zero==0) prod.push_back(ans/nums[i]);
            else if(nums[i]==0 && zero==1) prod.push_back(ans); //cant devide by zero
            else if( zero>1|| (nums[i]!=0 && zero==1)) prod.push_back(0);
        }
        return prod;
    }
};
__________________________Explanation___________________________________

 counted the number of zeroes . if there is more then 1 zero then all the
 products for all elements will be 0. if there is no zero then the ans is
 simply the product of all the other elements except the present element.
