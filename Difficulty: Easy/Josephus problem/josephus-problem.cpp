class Solution {
public:
    int josephus(int n, int k) {
        vector<int> arr;
        for(int i = 1; i <= n; i++)
            arr.push_back(i);

        int ind = 0;
        while(arr.size() > 1) {
            ind = (ind + k - 1) % arr.size();
            arr.erase(arr.begin() + ind);
        }

        return arr[0];
    }
};
