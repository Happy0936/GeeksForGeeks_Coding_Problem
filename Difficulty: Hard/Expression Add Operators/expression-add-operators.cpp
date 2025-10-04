class Solution {
  public:
    vector<string> findExpr(string &s, int target) {
        // code here
        
         vector<string> result;

        string expr;

        dfs(s, target, 0, 0, 0, expr, result);

        sort(result.begin(), result.end()); 

        return result;

    }

 

  private:

    void dfs(const string &s, long long target, int pos,

             long long value, long long last, string expr,

             vector<string> &result) {


        if (pos == s.size()) {

            if (value == target) {

                result.push_back(expr);

            }

            return;

        }

        

        for (int i = pos; i < (int)s.size(); i++) {

            string numStr = s.substr(pos, i - pos + 1);


            if (numStr.size() > 1 && numStr[0] == '0') break;

            

            long long num = stoll(numStr);

            

            if (pos == 0) {

             

                dfs(s, target, i + 1, num, num, numStr, result);

            } else {

                dfs(s, target, i + 1, value + num, num, expr + "+" + numStr, result);

                dfs(s, target, i + 1, value - num, -num, expr + "-" + numStr, result);

                dfs(s, target, i + 1, value - last + last * num, last * num, expr + "*" + numStr, result);

            }

        }
        
    }
};