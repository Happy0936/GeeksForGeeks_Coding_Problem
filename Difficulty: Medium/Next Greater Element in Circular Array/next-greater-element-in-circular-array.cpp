class Solution {
  public:
    vector<int> nextGreater(vector<int>& arr) {   
        int n = arr.size();
        vector<int> ans(n, -1);   
        stack<int> st;            


        for (int i = 2 * n - 1; i >= 0; i--) {
            int idx = i % n;   

         
            while (!st.empty() && arr[st.top()] <= arr[idx]) {
                st.pop();
            }

            if (!st.empty()) {
                ans[idx] = arr[st.top()];
            }

            st.push(idx);
        }
        return ans;
    }
};
