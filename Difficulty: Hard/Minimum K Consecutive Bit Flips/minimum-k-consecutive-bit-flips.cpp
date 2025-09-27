class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
    int n=arr.size();
    vector<int> fl(n, 0);
    int count=0;
        int flip = 0;               
       
        for (int i = 0; i < n; i++) {
            if (i >= k) {
                flip -= fl[i - k]; 
            }

            int val = arr[i];
            if (flip % 2 == 1) {
               val = 1 - val;
            }

            if (val == 0) {
                if (i + k > n) 
                return -1; 
                
                fl[i] = 1; 
                flip++;
                count++;
            }
        }

        return count;
    }
};