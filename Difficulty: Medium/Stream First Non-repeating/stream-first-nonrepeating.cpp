class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        int arr[26]{0};
        queue<char>q;
        int count = 0;
        string ans="";
        for(auto i: s){
            arr[i-'a']++;
            if(arr[i-'a'] ==1)q.push(i);
            while(!q.empty() && arr[q.front() -'a']!=1)q.pop();
            if(q.empty())ans+='#';
            else ans+=q.front();
        }
        return ans;
    }
};