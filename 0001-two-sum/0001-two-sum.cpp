class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;

        for (int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];

            if (hash.find(rem) != hash.end()) {
                return {hash[rem], i};
            }

            hash[nums[i]] = i;
        }

        return {};
    }
};