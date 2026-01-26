class Solution {
  public:
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<vector<int>>ans;
         solve(0, arr, ans);
         return ans;
        
    }
    
    void solve(int ind,vector<int>& arr,vector<vector<int>>&ans)
    {
        if(ind==arr.size()){
         ans.push_back(arr);
         return ;
        }
    
    
        for (int i = ind; i < arr.size(); i++) {
            swap(arr[ind], arr[i]);          
            solve(ind + 1, arr, ans);        
            swap(arr[ind], arr[i]);          
        }
        
    }    
};