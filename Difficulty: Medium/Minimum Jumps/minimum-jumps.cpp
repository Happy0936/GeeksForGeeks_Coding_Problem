class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) 
        return 0;

        if (arr[0] == 0)
        return -1;

        int r = arr[0];  
        int s = arr[0];   
        int jump = 1;     

        for (int i = 1; i < n; i++) {
            if (i == n - 1)
            return jump;

            r = max(r, i + arr[i]);  
            s--;                    

            if (s == 0) {            
                jump++;
                if (i >= r)
                return -1; 
                
                s = r - i;
            }
        }
        return -1;
    }
};

