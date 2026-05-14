class Solution {
  public:
  
    vector<int> lps(vector<int>& b)
    {
        int m = b.size();
        vector<int> lps(m,0);

        int len = 0;
        int i = 1;

        while(i < m)
        {
            if(b[i] == b[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if(len != 0)
                {
                    len = lps[len-1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return lps;
    }

    vector<int> search(vector<int> &a, vector<int> &b) {
        
        vector<int> ans;

        vector<int> lp = lps(b);

        int i = 0;
        int j = 0;

        while(i < a.size())
        {
            if(a[i] == b[j])
            {
                i++;
                j++;
            }

            if(j == b.size())
            {
                ans.push_back(i-j);
                j = lp[j-1];
            }
            else if(i < a.size() && a[i] != b[j])
            {
                if(j != 0)
                    j = lp[j-1];
                else
                    i++;
            }
        }

        return ans;
    }
};