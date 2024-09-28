//TC=O(n^2)
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size(),tuple_cnt=0;
        unordered_map<int,int> pairsum;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pairsum[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(pairsum.count(-(nums3[i]+nums4[j])))
                tuple_cnt+=(pairsum[-(nums3[i]+nums4[j])]);
            }
        }
        return tuple_cnt;
    }
};
