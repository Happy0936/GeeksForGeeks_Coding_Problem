class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        
        unordered_set<long long> s;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] != 0 && target % arr[i] == 0)
            {
                long long x = target / arr[i];
                
                if(s.find(x) != s.end())
                {
                    return true;
                }
            }
            
            s.insert(arr[i]);
        }
        
        return false;
    }
};