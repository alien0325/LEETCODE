class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int cur = 0;
        for (int i = 0;i< nums.size();i++){
            if(nums[i]==1){
                cur++;
                maxi = max(maxi,cur);
            }
            if(nums[i]!=1){
                   cur = 0;
            }
        }
        return maxi;
    }
};