class Solution:
    def getSecondLargest(self, arr):
        # code here
        arr.sort()
        arr.reverse()
        n=len(arr)
        for i in range (n-1): 
            if arr[i+1] !=arr[i]:
                return arr[i+1]
        
        
        return -1