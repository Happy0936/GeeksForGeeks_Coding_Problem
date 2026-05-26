class Solution {
  public:

    int minToggle(vector<int>& arr) {

        int n = arr.size();

        int res = INT_MAX;

        for(int i = 0; i <= n; i++)
        {
            int count = 0;

            for(int j = 0; j < i; j++)
            {
                if(arr[j] == 1)
                {
                    count++;
                }
            }

            for(int j = i; j < n; j++)
            {
                if(arr[j] == 0)
                {
                    count++;
                }
            }

            res = min(res, count);
        }

        return res;
    }
};