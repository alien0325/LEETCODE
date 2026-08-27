class Solution {
public:
    int hist(vector<int>& arr){
        int n = arr.size();
        int maxarea = 0;
        stack<int> st;
        for(int i = 0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                int element = st.top();
                st.pop();
                int nse = i;
                int pse = st.empty()?-1:st.top();
                maxarea = max(maxarea, arr[element]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = n;
            int element = st.top();
            st.pop();
            int pse = st.empty()?-1:st.top();
            maxarea = max(maxarea, arr[element]*(nse-pse-1));
        }
        return maxarea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxarea = 0;
        vector<vector<int>> prefsum(n,vector<int>(m,0));
        for(int j = 0;j<m;j++){
            int sum = 0;
            for(int i = 0;i<n;i++){
                if(matrix[i][j]=='0') sum = 0;
                else{
                    sum+=1;
                    prefsum[i][j] = sum;
                } 
            }
        }
        for(int i = 0;i<n;i++){
            maxarea = max(maxarea,hist(prefsum[i]));
        }
    return maxarea;
    }
};