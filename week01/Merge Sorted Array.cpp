__________________________________1st approch_________________________________

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i=m,j=0,k=0;
        while(i<(m+n))
        {
            nums1[i]=nums2[j];
            i++;j++;
        }
        sort(nums1.begin(),nums1.end());
        return ;
    }
};

_________________________________2nd approch__________________________________

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums;
        nums=nums1;

        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(nums[i]<=nums2[j]) nums1[k]=nums[i],i++;
            else nums1[k]=nums2[j],j++;
            k++;
        }

        if(k<(m+n))
        {
            while(j<n) nums1[k]=nums2[j],j++,k++;
            while(i<m) nums1[k]=nums[i],i++,k++;
        }
        return ;
    }
};

__________________________Explanation_______________________________

approch 1: assigned the nums2 array values in nums1's empty indexes.then sorted nums1.

approch 2: took a 3rd array nums where (nums=nums1). used two pointer .
comparing two values from nums and nums2 and the smaller value is stored in nums1.
Thus we got nums1 array with sorted values.
