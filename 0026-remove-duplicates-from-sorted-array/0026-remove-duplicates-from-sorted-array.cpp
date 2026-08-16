class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp;

        int i = 0;
        while (i < len) {
            temp.push_back(nums[i]);

            int j = i + 1;
            while (j < len && nums[j] == nums[i]) {
                j++;
            }

            i = j;
        }

        nums = temp;
        return temp.size();
    }
};
// optimal
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n = nums.size();

//         if (n == 0) return 0;

//         int j = 0;   // Points to the last unique element

//         for (int i = 1; i < n; i++) {
//             if (nums[i] != nums[j]) {
//                 j++;
//                 nums[j] = nums[i];
//             }
//         }

//         return j + 1;
//     }
// };