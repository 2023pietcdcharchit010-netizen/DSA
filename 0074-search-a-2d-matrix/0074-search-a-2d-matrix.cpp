class Solution {
public: 
    bool searchInRow(vector<vector<int>> & mat,int target,int row){
        int n=mat[0].size();
        int i=0,j=n-1;

        while(i<=j){
            int mid=i+(j-i)/2;
            if(target==mat[row][mid]){
                return true;
            }
            else if(target>mat[row][mid]){
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();

        int stRow=0,endRow=m-1;

        while(stRow<=endRow){
            int midRow=stRow+(endRow-stRow)/2;

            if(target>=mat[midRow][0] && target <= mat[midRow][n-1]){
                return searchInRow(mat,target,midRow);
            }
            else if(target >= mat[midRow][n-1]){
                stRow=midRow+1;
            }
            else{
                endRow=midRow-1;
            }
        }
        return false;
    }
};