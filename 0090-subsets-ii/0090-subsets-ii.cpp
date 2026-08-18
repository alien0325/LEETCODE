class Solution {
public:
    void subset2(int ind,vector<vector<int>>&ans, vector<int> ds, vector<int> arr){
        ans.push_back(ds);
        for(int i = ind;i<arr.size();i++){
            if(i!=ind && arr[i]==arr[i-1]) continue;
            ds.push_back(arr[i]);
            subset2(i+1,ans,ds,arr);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds;
        sort(nums.begin(),nums.end());
        subset2(0,ans,ds,nums);
        return ans;
    }
};