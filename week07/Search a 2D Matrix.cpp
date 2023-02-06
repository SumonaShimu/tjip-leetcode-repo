//TC:O(m+n) where m is the number of rows and n is the number of columns in the matrix
//MC:O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0,j=col-1;
        while(i<row && j>=0){
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]<target) i++;
            else j--;
        }
        return false;
    }
};