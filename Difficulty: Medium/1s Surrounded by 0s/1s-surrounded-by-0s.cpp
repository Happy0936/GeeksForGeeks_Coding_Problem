class Solution {
  public:
  
  
  void dfs(vector<vector<int>>& grid, int i, int j)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
        {
            return;
        }
        
         grid[i][j] = 0;
        
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
  
  
    int cntOnes(vector<vector<int>>& grid) {
        // code here
    
        
        for(int i=0;i<grid.size();i++)
            {
                if(grid[i][0]==1)
                {
                  
                  dfs(grid, i, 0) ; 
                }
                
                if(grid[i][grid[0].size()-1]==1)
                {
                    dfs(grid, i, grid[0].size()-1);
                }
                
            }
            
        for(int j=0;j<grid[0].size();j++)
        {
            if(grid[0][j]==1)
            {
                dfs(grid,0,j);
            }
            
            if(grid[grid.size()-1][j])
            {
                dfs(grid,grid.size()-1,j);
            }
        }
        
        
        
        int count =0;
        for(int i=0;i< grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if( grid[i][j]==1)
                {
                    count++;
                }
            }
            
        }
        
        return count;
    }
    
    
};