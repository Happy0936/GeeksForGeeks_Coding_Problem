class Solution {
  public:
    string largestSwap(string &s) {
        if(s.size()<2)
        return s;
        
        
      
        int c=-1;
        int b=-1;
        for(int i=0;i<s.size();i++)
        {
            char max=s[i];
            int a=i;
            for(int j=i;j<s.size();j++)
            {
            if(max<=s[j])
            {
               max=s[j];
               a=j;
            }
            }
            
           if(s[i]<s[a]){
            b=i;
            c=a;
            break;}
            
        }
        if( b!=-1)
        swap(s[b],s[c]);
        
        return s;
        
    }
};