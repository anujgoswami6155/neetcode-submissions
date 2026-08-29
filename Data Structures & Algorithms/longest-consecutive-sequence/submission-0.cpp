class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int mxlen = 0;

        for (int x : nums) {
            st.insert(x);
        }

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it + 1;
                while(st.find(x) != st.end()) {
                    cnt++;
                    x++;
                }
                mxlen = max(mxlen, cnt);
            }
        }

        return mxlen;
    }
};
