class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
 
        // code here
        int n= arr.size();
        
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='P'){
            a.push_back(i);
            }
            
            else{
             b.push_back(i);
            }
        
        }
        int c=a.size();
        int d=b.size();
         int i=0;
         int j=0;
        int count=0;
        while(i<c && j<d)
        {
          if(abs(a[i]-b[j])<=k) {
          count++;
          i++;
          j++;
          }
          
          else if(a[i]<b[j])
          {
             i++ ;
          }
          else
          j++;
        }
        
        return count;
    }
};