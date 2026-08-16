class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // next_permutation(nums.begin(), nums.end());
        int indx = -1;
        int len = nums.size();
        for(int i = len-2; i >= 0; i--){
            if(nums[i]<nums[i+1]){
                indx = i;
                break;
            }
        }
        if(indx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i = len-1;i>= indx;i--){
            if(nums[i]>nums[indx]){
                swap(nums[i],nums[indx]);
                break;
            }
        }
        reverse(nums.begin()+indx+1,nums.end());
    }
};