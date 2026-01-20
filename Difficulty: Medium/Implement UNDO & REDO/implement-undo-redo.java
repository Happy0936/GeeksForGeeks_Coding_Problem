class Solution {
    StringBuilder buffer = new StringBuilder();
    int currentLength = 0;   
    int maxLength = 0;
    public void append(char x) {
        if (currentLength < buffer.length()) {
            
            buffer.setCharAt(currentLength, x);
        } else {
            buffer.append(x);
        }
        currentLength++;
        maxLength = currentLength; 
    }
   
    public void undo() {
        if (currentLength > 0) {
            currentLength--; 
        }
    }
    
    public void redo() {
        if (currentLength < maxLength) {
            currentLength++;
        }
    }
    
    public String read() {
        return buffer.substring(0, currentLength);
    }
}