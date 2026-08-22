class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int mxlen = 0;
        unordered_map<char, int> freq;

        for(int r = 0; r < n; r++) {
            freq[s[r]]++;

            while(freq[s[r]] > 1) {
                freq[s[l]]--;
                l++;
            }

            mxlen = max(mxlen, r - l + 1);
        }

        return mxlen;
    }
};
