class Solution {
  public:
    int maxSubarrSum(vector<int>& arr, int a, int b) {
        int n = arr.size();
        vector<long long> p(n+1, 0);

        for (int i = 0; i < n; i++) {
            p[i+1] = p[i] + arr[i];
        }

        long long ans = LLONG_MIN;
        multiset<long long> w;

        for (int r = a; r <= n; r++) {
            w.insert(p[r - a]);
            if (r - b - 1 >= 0) {
                w.erase(w.find(p[r - b - 1]));
            }
            ans = max(ans, p[r] - *w.begin());
        }

        return (int)ans;
    }
};

