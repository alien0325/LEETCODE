class Solution {
public:
    int max_ele(vector<vector<int>> &mat, int clm){
        int indx = -1;
        int maxi = INT_MIN;
        int n = mat.size();
        for(int i = 0;i<n;i++){
            if(mat[i][clm]>maxi){
                maxi = mat[i][clm];
                indx = i;
            }
            
        }
        return indx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int n = mat.size();
        int m = mat[0].size();
        int high = m-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            int row = max_ele(mat,mid);
            int left = mid-1>=0? mat[row][mid-1]:-1;
            int right = mid+1<m? mat[row][mid+1]:-1;
            if(left<mat[row][mid] && right< mat[row][mid]) return {row,mid};
            else if(left>mat[row][mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {-1,-1};
    }
};