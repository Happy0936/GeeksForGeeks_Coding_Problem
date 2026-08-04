class Solution:
    def countPairs(self, arr: list[int], k: int) -> int:
        # code here
        arr.sort()
        count=0
        l=0
        
        for i in range (len(arr)):
        
            while arr[i]-arr[l]>=k:
            
                l=l+1
                
            count=count + i-l    
        return count        