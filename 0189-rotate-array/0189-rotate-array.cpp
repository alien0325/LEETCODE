class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int len = nums.size();
        // int i = 0;
        // if(len == 0) return;
        // k = k % len;

        // while(i<len && k>0){
        //     int temp = nums[len-1];
        //     nums.pop_back();
        //     nums.insert(nums.begin(),temp);
        //     k--;
        //     i++;
        // }

        int n = nums.size();
        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};