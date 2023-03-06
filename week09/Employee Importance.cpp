/*
 *TC=O(N) ;N is the total number of employees
 *MC=O(N)
*/

class Solution {
public:
    unordered_map<int, Employee*> employeeMap;
    int dfs(int id){
        Employee* emp = employeeMap[id];
        int ans = emp->importance;
        for(auto it : emp->subordinates){
            ans += dfs(it);
        }
        return ans;
    }
    int getImportance(vector<Employee*> employees, int id) {
        for(auto it : employees){
            employeeMap[it->id] = it;
        }
        return dfs(id);
    }
};