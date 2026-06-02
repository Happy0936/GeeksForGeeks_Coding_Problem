class Solution {
  public:
    int sumDiffPairs(vector<int>& arr, int k) {
        // code here
        int sum =0;
        int n=arr.size();
         sort(arr.begin(), arr.end());
         for(int i=n-1;i>0;i--)
         {
             if(arr[i]-arr[i-1] < k){
                 sum =sum + arr[i-1]+arr[i];
               i--;
             }
             
         }
         return sum;
    }
};