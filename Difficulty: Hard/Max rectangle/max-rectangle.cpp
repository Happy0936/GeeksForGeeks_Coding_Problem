class Solution {
public:
    int maxArea(vector<vector<int>> &mat) {
        int n = mat.size();
        if(n == 0) return 0;  
        int m = mat[0].size();  
        vector<int> heights(m, 0); 
        int max_area = 0; 
        for(int i = 0; i < n; ++i) {
        
            for(int j = 0; j < m; ++j)
                heights[j] = mat[i][j] == 0 ? 0 : heights[j] + 1;  
                
            stack<int> st;
            int j = 0;
            while (j < m) {
                if (st.empty() || heights[j] >= heights[st.top()]) {
                    st.push(j++);
                } else {
                    int top = st.top();
                    st.pop();
                    int width = st.empty() ? j : j - st.top() - 1;
                    int area = heights[top] * width;
                    max_area = max(max_area, area); 
                }
            }
            
            while (!st.empty()) {
                int top = st.top();
                st.pop();
                int width = st.empty() ? j : j - st.top() - 1;
                int area = heights[top] * width;
                max_area = max(max_area, area); 
            }
        }
        return max_area; 
        }
};

