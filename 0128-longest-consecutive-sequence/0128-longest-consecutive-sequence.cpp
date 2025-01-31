class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int longest = 1;
        unordered_set<int> st(nums.begin(), nums.end());

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) { // Check if it's the start of a sequence
                int count = 1;
                int x = it;

                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    count = count + 1;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
