class Solution {
  public:
    bool isBitSet(int n) {
        
        if(n == 0)
        {
            return false;
        }
        
        for(int i = 1; (int)pow(2,i) <= n + 1; i++)
        {
            if((n + 1) % (int)pow(2,i) != 0)
            {
                return false;
            }
            
            if((int)pow(2,i) == n + 1)
            {
                return true;
            }
        }
        
        return false;
    }
};