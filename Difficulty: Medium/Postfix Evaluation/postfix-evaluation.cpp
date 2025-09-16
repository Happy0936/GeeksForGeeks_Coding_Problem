class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        
     stack<int>a;
     
     
       for (auto &c : arr) {
         if(isdigit(c[0])|| (c.size() > 1 && c[0] == '-'))
         {
             a.push(stoi(c));         }
         else{
             
            int v2= a.top(); a.pop();
            int v1= a.top(); a.pop();
            
            switch(c[0]){
                
                case '+':
                a.push(v1+v2); 
                break;
                
                 case '-':
                a.push(v1-v2);
                break;
                
                 case '*':
                a.push(v1*v2);
                break;
                 case '^':
                a.push(pow(v1,v2));
                break;
                
                 case '/':
                int res = v1 / v2;
                        if ((v1 ^ v2) < 0 && v1 % v2 != 0) res--; 
                        a.push(res);
                        break;
            }
         }
        
     }
     return a.top();
          
        
    }
};