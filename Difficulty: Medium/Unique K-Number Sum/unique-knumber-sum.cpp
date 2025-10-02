class Solution {
  public:
  
     void val(int start, int k, int n, vector<int>& cur, vector<vector<int>>& res) {
       
        if (k == 0 && n == 0) {
            res.push_back(cur);
            return;
        }
        if (k == 0 || n < 0) return;

        for (int i = start; i <= 9; i++) {
            cur.push_back(i);                  
            val(i + 1, k - 1, n - i, cur, res); 
            cur.pop_back();                   
        }
    }
 vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>>res;
        vector<int>cur;
        int start;
        val(1, k, n, cur,res);
        return res;
    }
    
};