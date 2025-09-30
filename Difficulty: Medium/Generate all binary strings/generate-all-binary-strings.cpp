class Solution {
  public:
    vector<string> binstr(int n) {
        vector<string> ans;
        int total = 1 << n;  

        for (int num = 0; num < total; num++) {
            string s = "";
            for (int j = n - 1; j >= 0; j--) {
                if (num & (1 << j)) 
                    s += '1';
                else 
                    s += '0';
            }
            ans.push_back(s);
        }
        return ans;
    }
};
