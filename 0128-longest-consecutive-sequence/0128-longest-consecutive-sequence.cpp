class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) {
            return 0;
        }
        int longest = 1;
        unordered_set<int> ans;
        for(int i = 0;i<n;i++){
            ans.insert(nums[i]);
        }
        for(auto it: ans){
            if(ans.find(it-1)==ans.end()){
                int x = it;
                int count = 1;
                while(ans.find(x+1)!=ans.end()){
                    x +=1;
                    count+=1;
                }
                longest =max(longest,count);
            }
        }
        return longest;
    }
};