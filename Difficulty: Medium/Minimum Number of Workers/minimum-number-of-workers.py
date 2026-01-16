class Solution:
    def minMen(self, arr):
        n = len(arr)
        b = []

       
        for i in range(n):       
            if arr[i] != -1:
                low = max(0, i - arr[i])
                high = min(n-1, i + arr[i])
                b.append((low, high))

        if not b:
            return -1

      
        b.sort()

        i = 0
        cu = 0
        m = -1      
        workers = 0

        while cu < n:
            best = m
            while i < len(b) and b[i][0] <= cu:
                best = max(best, b[i][1])
                i += 1

            if best == m:         
                return -1

            workers += 1
            cu = best + 1
            m = best

        return workers
