
import math
class Solution:
    def findWays(self, n):
        
        if n % 2 == 1:
            return 0
        
        m = n//2
        return math.comb(2*m, m)//(m+1)

        