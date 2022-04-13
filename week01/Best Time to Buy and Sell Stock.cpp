___________________________Code_____________________________________

//complexity: O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_min=100005,ans=0;
        for(int i=0;i<prices.size();i++)
        {
            curr_min=min(curr_min,prices[i]);
            ans=max(prices[i]-curr_min,ans);
        }
        return ans;
    }
};
__________________________Explanation_______________________________

storing the minimum value till now(curr_min). and storing the maximum
profit using the current minimum and current price.
