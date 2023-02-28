/*
 *TC=O(rows*cols)
 *MC=O(1)
 */
class Solution {
public:
    int rows,cols;
    void dfs(vector<vector<char>>& grid,int row,int col){
        if(row<0 || row==rows || col<0 || col==cols) return;
        if(grid[row][col]!='1') return;
        
        grid[row][col]='v'; //visited
        
        dfs(grid,row-1,col);
        dfs(grid,row+1,col);
        dfs(grid,row,col-1);
        dfs(grid,row,col+1);
    }

    int numIslands(vector<vector<char>>& grid) {
        rows=grid.size();
        cols=grid[0].size();
        int count=0;
        for(int row=0;row<rows;row++)
        {
            for(int col=0;col<cols;col++)
            {
                if(grid[row][col]=='1') {
                    dfs(grid,row,col);
                    count++;
                }
            }
        }
        return count;
    }
};