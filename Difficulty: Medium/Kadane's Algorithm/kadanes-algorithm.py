class Solution:
    def maxSubarraySum(self, arr):
        # Code here
        n=len(arr)
        cur_sum= arr[0]
        sum=arr[0]
        for i in range (1, n):
            
            cur_sum =max(arr[i], cur_sum+arr[i])
            sum=max(cur_sum, sum)
            
        return sum    
            
            
 