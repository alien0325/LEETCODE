class Solution {
public:
    vector<int> findNSE(vector<int>& arr){
        vector<int> nse(arr.size());
        stack<int> st;
        for(int i = arr.size()-1;i>=0;i--){
            while(!st.empty()&& arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty())nse[i] = arr.size();
            else{
                nse[i] = st.top();
            }
            st.push(i);
        }
        return nse;
    }
    vector<int> findPSEE(vector<int>& arr){
        vector<int> psee(arr.size());
        stack<int> st;
        for(int i = 0;i<arr.size();i++){
            while(!st.empty()&& arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty())psee[i] = -1;
            else{
                psee[i] = st.top();
            }
            st.push(i);
        }
        return psee;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNSE(arr);
        vector<int> psee = findPSEE(arr);
        int total = 0;
        int mod = (int)1e9+7;
        for(int i = 0;i<arr.size();i++){
            int left = i-psee[i];
            int right = nse[i] - i;
            total = (total + (left*right*1ll*arr[i])% mod)% mod; 
        }
        return total;
    }
};