class Solution {
  public:
  
    int minSteps(vector<int>& arr, int start, int end) {
        
        if(start == end)
            return 0;
        
        vector<int> dist(1000, 1e9);
        queue<pair<int,int>> q;
        
        q.push({start, 0});
        dist[start] = 0;
        
        while(!q.empty()) {
            
            int node = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            for(int i = 0; i < arr.size(); i++) {
                
                int num = (node * arr[i]) % 1000;
                
                if(num == end)
                    return steps + 1;
                
                if(steps + 1 < dist[num]) {
                    
                    dist[num] = steps + 1;
                    q.push({num, steps + 1});
                }
            }
        }
        
        return -1;
    }
};