class Solution():
    def checkRedundancy(self, s):
        # code here 
        stack=[]
        for ch in s:
            if ch!=")":
                stack.append(ch)
                
            else:
                op_found=False
                
                while stack and stack[-1]!="(":
                   top =stack.pop()
                   
                   if top in '+-*/':
                       op_found=True
                
                stack.pop()
                
                if not op_found:
                  return True
                  
        return False          