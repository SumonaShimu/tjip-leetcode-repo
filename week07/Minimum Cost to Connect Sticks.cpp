//TC:O(nlogn)
//MC:O(n)
//n=number of sticks
class Solution {
public:
    int connectSticks(vector<int>& sticks) {
        priority_queue<int, vector<int>, greater<int>>pq(sticks.begin(),sticks.end());
        //passes sticks array in the pq in lenear time
        int minCost=0;
        while(pq.size()>1){
        int x=pq.top(); pq.pop();
        int y=pq.top(); pq.pop();
        minCost+=(x+y);
        pq.push(x+y);
        }
        return minCost;
    }
    
};