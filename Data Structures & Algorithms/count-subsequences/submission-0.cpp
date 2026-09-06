class Solution {
public:
    int numDistinct(string s, string t) {
        int n = s.length();
        int m = t.length();

        vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(m + 1, 0));

        for(int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                
                // Don't use this element, skip it 
                dp[i][j] = dp[i - 1][j];

                // If same increase the subsequences
                if(s[i - 1] == t[j - 1]) {
                    dp[i][j] += dp[i - 1][j - 1];
                }
            }
        }

        return dp[n][m];
    }
};
