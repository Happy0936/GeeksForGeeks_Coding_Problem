class Solution {
  public:
    int findMaxProduct(vector<int>& arr) {
        int n = arr.size();
        long long pos = 1, neg = 1;
        int mini = 1e9;
        int nCnt = 0, pCnt = 0, zero = 0;
        int mod = 1e9 + 7;

        for (int x : arr) {
            if (x > 0) {
                pos = (pos * x) % mod;
                pCnt++;
            }
            else if (x < 0) {
                neg = (neg * abs(x)) % mod;
                mini = min(mini, abs(x));
                nCnt++;
            }
            else {
                zero++;
            }
        }

        if (pCnt == 0 && nCnt == 0)
            return 0;

        if (pCnt == 0 && nCnt == 1) {
            if (zero > 0)
                return 0;
            return -neg;
        }

        if (nCnt % 2)
            neg /= mini;

        return (pos * neg) % mod;
    }
};