class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> temp(n);
        
        temp[0] = arr[0] ^ arr[1];
        temp[n - 1] = arr[n - 2] ^ arr[n - 1];
        
        for(int i = 1; i < n - 1; i++) {
            temp[i] = arr[i - 1] ^ arr[i + 1];
        }
        
        arr = temp;
    }
};