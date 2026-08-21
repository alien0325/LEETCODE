class Solution {
public:
    bool CanplaceQ(int row,int col, vector<string>&boards,int n){
        int dup_col = col;
        int dup_row = row;

        while(row>=0 && col>=0){
            if(boards[row][col]=='Q') return false;
            col--;
            row--;
        }
        col = dup_col;
        row = dup_row;
        while(col>=0){
            if(boards[row][col]=='Q') return false;
            col--;
        }
        col = dup_col;
        while(row<n && col>=0){
            if(boards[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int col, vector<string> &boards, vector<vector<string>> &ans, int n){
        if(col == n){
            ans.push_back(boards);
            return;
        }
        for(int row = 0; row<n;row++){
            if(CanplaceQ(row,col,boards,n)){
                boards[row][col] = 'Q';
                solve(col+1,boards,ans,n);
                boards[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> boards(n);
        string s(n,'.');
        for(int i = 0;i<n;i++){
            boards[i]=s;
        }
        solve(0,boards,ans,n);
        return ans;
    }
};