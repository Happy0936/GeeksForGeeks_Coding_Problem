class Solution {
public:
    int maxDotProduct(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();

        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, LLONG_MIN));

        // Matching 0 elements of b gives 0 dot product
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= min(i, m); j++) {
                // Skip current element of a (insert 0 in b)
                dp[i][j] = dp[i - 1][j];

                // Match a[i-1] with b[j-1]
                if (dp[i - 1][j - 1] != LLONG_MIN) {
                    dp[i][j] = max(dp[i][j],
                                   dp[i - 1][j - 1] +
                                   1LL * a[i - 1] * b[j - 1]);
                }
            }
        }

        return (int)dp[n][m];
    }
};