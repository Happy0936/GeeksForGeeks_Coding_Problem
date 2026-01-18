class Solution {
    public ArrayList<Integer> nextFreqGreater(int[] arr) {
        // code here
        ArrayList<Integer> ans = new ArrayList<>();
        int n = arr.length;
        
        Hashtable<Integer, Integer> hash = new Hashtable<>();
        for(int x : arr){
            if(!hash.containsKey(x))
                hash.put(x, 1);
            else
                hash.put(x, hash.get(x) + 1);
        }
        
        Stack<Integer> stack = new Stack<>();
        
        for(int i = n - 1;i >= 0;i--){
            int currFreq = hash.get(arr[i]);
            while(!stack.isEmpty() && hash.get(stack.peek()) <= currFreq)
                stack.pop();
            if(!stack.isEmpty())
                ans.add(stack.peek());
            else
                ans.add(-1);
            stack.push(arr[i]);
        }
        
        Collections.reverse(ans);
        return ans;
    }
}