class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long minSum = 0, maxSum = 0;

        stack<int> st;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] > nums[i])) {
                int j = st.top();
                st.pop();

                int left = j - (st.empty() ? -1 : st.top());
                int right = i - j;

                minSum += 1LL * nums[j] * left * right;
            }
            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] < nums[i])) {
                int j = st.top();
                st.pop();

                int left = j - (st.empty() ? -1 : st.top());
                int right = i - j;

                maxSum += 1LL * nums[j] * left * right;
            }
            st.push(i);
        }

        return maxSum - minSum;
    }
};