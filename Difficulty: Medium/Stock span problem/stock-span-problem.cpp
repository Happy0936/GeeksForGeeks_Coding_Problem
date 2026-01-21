class Solution {
  public:
    virtual vector<int> calculateSpan(vector<int>& arr) {
      vector<int> ans;
      stack<int> st; st.push(-1);
      
      int n=arr.size();
      for(int i=0; i<n; i++){
        int x=arr[i];
        while(st.top()!=-1 && arr[st.top()]<=x) st.pop();
        
        ans.push_back(i-st.top());
        st.push(i);
      }
      
      return ans;
    }
};