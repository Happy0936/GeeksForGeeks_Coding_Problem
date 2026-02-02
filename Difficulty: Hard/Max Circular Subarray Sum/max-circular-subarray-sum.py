class Solution:
    def maxCircularSum(self, arr):
        n = len(arr)
        m = maxi = arr[0]
        mm = mini = arr[0]
        
        t = arr[0]
        
        for i in range(1, n):
            x = arr[i]
            
            m = max(x, m + x)
            maxi = max(maxi, m)
            
            mm = min(x, mm + x)
            mini = min(mini, mm)
            
            t += x
            
        if maxi < 0:
            return maxi
            
        return max(maxi, t - mini)