class Solution {
public:
    void subsets(int ind,vector<vector<int>>&ans, vector<int> ds, vector<int> arr,int n){
        if(ind==n){
            ans.push_back(ds);
            return;
        }
        ds.push_back(arr[ind]);
        subsets(ind+1,ans,ds,arr,n);
        ds.pop_back();
        subsets(ind+1,ans,ds,arr,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds;
        subsets(0,ans,ds,nums,nums.size());
        return ans;
    }
};