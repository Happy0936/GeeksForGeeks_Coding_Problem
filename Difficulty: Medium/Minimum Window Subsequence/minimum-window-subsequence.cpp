class Solution {
  public:
    string minWindow(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        int bestLen = INT_MAX;
        string best = "";

        for (int i = 0; i < n; i++) {
            int j = 0;
            int k = i;

            while (k < n && j < m) {
                if (s1[k] == s2[j]) j++;
                k++;
            }

            if (j < m) break;

            j = m - 1;
            int end = k - 1;
            k = end;

            while (k >= i && j >= 0) {
                if (s1[k] == s2[j]) j--;
                k--;
            }

            int start = k + 1;
            int len = end - start + 1;

            if (len < bestLen) {
                bestLen = len;
                best = s1.substr(start, len);
            }
        }

        return best;
    }
};
