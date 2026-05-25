class Solution {
  public:
  
    bool checkElements(int start, int end, vector<int> &arr) {
        
        unordered_set<int> s;
        
        for(int i = 0; i < arr.size(); i++)
        {
            s.insert(arr[i]);
        }
        
        for(int i = start; i <= end; i++)
        {
            if(s.find(i) == s.end())
            {
                return false;
            }
        }
        
        return true;
    }
};