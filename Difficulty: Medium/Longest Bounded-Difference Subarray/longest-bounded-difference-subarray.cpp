class Solution {
  public:
    vector<int> longestSubarray(vector<int>& arr, int x) {
        int n = arr.size();
        deque<int> max_dq, min_dq;
        int start = 0, best_len = 0, best_start = 0;

        for (int end = 0; end < n; end++) {
            while (!max_dq.empty() && arr[max_dq.back()] < arr[end]) {
                max_dq.pop_back();
            }
            max_dq.push_back(end);
            while (!min_dq.empty() && arr[min_dq.back()] > arr[end]) {
                min_dq.pop_back();
            }
            min_dq.push_back(end);
            while (!max_dq.empty() && !min_dq.empty() &&
                   arr[max_dq.front()] - arr[min_dq.front()] > x) {
                start++;
                if (max_dq.front() < start) max_dq.pop_front();
                if (min_dq.front() < start) min_dq.pop_front();
            }

            if (end - start + 1 > best_len) {
                best_len = end - start + 1;
                best_start = start;
            }
        }

        vector<int> ans;
        for (int i = best_start; i < best_start + best_len; i++) {
            ans.push_back(arr[i]);
        }
        return ans;
    }
};