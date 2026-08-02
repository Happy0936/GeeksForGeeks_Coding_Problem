class Solution:
    def subarraySum(self, arr, target):
        # code here
        j=0
        sum=0
        for i in range (len(arr)):
           
            sum = sum+arr[i]
            while(sum>target):
                sum = sum-arr[j]
                j=j+1
                
            if sum == target:
                return [j+1,i+1]    
                 
                 
        return [-1]
    