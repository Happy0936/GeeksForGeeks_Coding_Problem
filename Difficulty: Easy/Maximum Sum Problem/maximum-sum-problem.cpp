class Solution {
  public:
  
    int fun(int n) {
        if(n==0)
        return 0;
        
        int sum = fun(n/2) + fun(n/3) + fun(n/4);
        
        return max(n, sum);
    }

    int maxSum(int n) {
        return fun(n);
    }
};