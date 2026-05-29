class Solution {
  public:
  
    int dp[101][901];
    
    int solve(int idx, int prevSum, string &s)
    {
        int n = s.size();
        
        if(idx == n)
        return 1;
        
        if(dp[idx][prevSum] != -1)
        return dp[idx][prevSum];
        
        int sum = 0;
        int ans = 0;
        
        for(int i = idx; i < n; i++)
        {
            sum += s[i] - '0';
            
            if(sum >= prevSum)
            {
                ans += solve(i + 1, sum, s);
            }
        }
        
        return dp[idx][prevSum] = ans;
    }
  
    int validGroups(string &s) {
        
        memset(dp, -1, sizeof(dp));
        
        return solve(0, 0, s);
    }
};