class Solution {
  public:
   int helper(int i,int n,int m,vector<int>&dp){
       if(i<m)return dp[i] = 1;
       else if(i==m)return dp[i] = 2;
       if(dp[i]!=-1)return dp[i];
       return dp[i] = (helper(i-1,n,m,dp)+helper(i-m,n,m,dp))%1000000007;
   }
    int countWays(int n, int m) {
        vector<int>dp(n+1,-1);
        dp[0] = 0;
        return helper(n,n,m,dp);
    }
};