class Solution {
public:
    void subsets(int ind,vector<vector<int>>&ans, vector<int> ds, vector<int> arr){
        if(ind==arr.size()){
            if(find(ans.begin(),ans.end(),ds)== ans.end()){
                ans.push_back(ds);
            }
            return;
        }
        ds.push_back(arr[ind]);
        subsets(ind+1,ans,ds,arr);
        ds.pop_back();
        subsets(ind+1,ans,ds,arr);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds;
        subsets(0,ans,ds,nums);
        return ans;
    }
};