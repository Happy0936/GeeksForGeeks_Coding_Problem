class Solution {
public:
    vector<int> maxOfMins(vector<int>& arr) {
       int n = arr.size();
        vector<int> res(n + 1, INT_MIN);
        vector<int> left(n, -1), right(n, n);

        stack<int> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (!s.empty()) left[i] = s.top();
            s.push(i);
        }
        while (!s.empty()) s.pop();
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if (!s.empty()) right[i] = s.top();
            s.push(i);
        }

        for (int i = 0; i < n; i++) {
            int len = right[i] - left[i] - 1;
            res[len] = max(res[len], arr[i]);
        }

        for (int i = n - 1; i >= 1; i--) {
            res[i] = max(res[i], res[i + 1]);
        }

        res.erase(res.begin()); // remove res[0]
        return res;
    }
};