___________________________Code_____________________________________

//complexity: O(n^3)

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    int n=nums.size();
    for(int l=0;l<n-3;l++){
        int a=nums[l];
        if(l>0 && nums[l]==nums[l-1]) continue;
        for(int k=l+1;k<n-2;k++){
        int b=nums[k];
        if(target>=0 && (a>target || a+b>target)) break;
        else if(k>l+1 && nums[k]==nums[k-1]) continue;

        long long int new_target=target-(a+b);
        int i=k+1,j=n-1;
        while(i<j) {
            if(nums[i]+nums[j]>new_target) j--;
            else if(nums[i]+nums[j]<new_target) i++;
            if(nums[i]+nums[j]==new_target && i!=j) {
            //cout<<l<<' '<<k<<' '<<i<<' '<<j<<'='<<endl;
               ans.push_back(vector<int>{nums[l],nums[k],nums[i],nums[j]});
               i++;j--;
               while(i<j && nums[i]==nums[i-1]) i++;
               while(i<j && nums[j]==nums[j+1]) j--;
            }
        }

        }

    }
    return ans;
    }

};
