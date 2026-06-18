class Solution {
  public:
    int findCoverage(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        int coverage = 0;
        
        vector<int> cur1(m,0), sum(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) sum[j] += mat[i][j];
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 0) coverage += (cur1[j] > 0) + ((sum[j] - cur1[j] - mat[i][j]) > 0);
                cur1[j] += mat[i][j];
            }
        }
        
        vector<int> cur2(n,0), sum2(n,0);
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++) sum2[i] += mat[i][j];
        }
        
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(mat[i][j] == 0) coverage += (cur2[i] > 0) + ((sum2[i] - cur2[i] - mat[i][j]) > 0);
                cur2[i] += mat[i][j];
            }
        }
        
        return coverage;
    }
};