class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // better for this but optimal for GFG
        // int i = 0;
        // int n = matrix.size();
        // int j = matrix[0].size()-1;
        // while(i<n && j>=0){
        //     if(matrix[i][j]==target){
        //         return true;
        //     }
        //     else if(matrix[i][j]>target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // } 
        // return false;
        int low = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int high = m*n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[mid/m][mid%m]==target)return true;
            else if(matrix[mid/m][mid%m]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};