___________________________Code_____________________________________

//complexity: O(n^2)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int n=nums.size();

    for(int k=0;k<n-2;k++){
    if(k>0 && nums[k]==nums[k-1]) continue; //as i != j != k
    else if(nums[k]>0) break; //if the smallest element is larger then 0 then there is no solution
    int target=0-nums[k];
    int i=k+1,j=n-1;
    while(i<j) {
        if(nums[i]+nums[j]>target) j--;
        else if(nums[i]+nums[j]<target) i++;
        if(nums[i]+nums[j]+nums[k]==0 && i!=j) {
           ans.push_back(vector<int>{nums[k],nums[i],nums[j]});
           i++;j--;
           while(i<j && nums[i]==nums[i-1]) i++; //ignoring repeated elements
           while(i<j && nums[j]==nums[j+1]) j--;
        }
    }

    }
    return ans;
    }
};
__________________________Explanation_______________________________

sorted the array. using 3 pointers for 3 values(k,i,j) such that
nums[k]+nums[i]+nums[j]=0. k indicates the 1st value.target= 0 - nums[k].
Now finding the target or remaming value using two pointer approch.

