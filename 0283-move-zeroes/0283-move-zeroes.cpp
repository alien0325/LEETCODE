class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j = 0;

        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] != 0) {
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // while (j < nums.size()) {
        //     nums[j] = 0;
        //     j++;
        // }

        int j = -1;
        for (int i = 0; i < nums.size(); i++) { 
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        if(j==-1) return;
        for(int i = j+1;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};