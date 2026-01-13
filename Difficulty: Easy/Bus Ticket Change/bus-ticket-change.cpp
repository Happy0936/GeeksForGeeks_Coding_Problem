


class Solution {
  public:
    bool canServe(vector<int>& arr) {
        int count5 = 0, count10 = 0;

        for(int x : arr) {

            if(x == 5) {
                count5++;
            }

            else if(x == 10) {
                if(count5 == 0) return false;
                count5--;
                count10++;
            }

            else { // x == 20
                if(count10 > 0 && count5 > 0) {
                    count10--;
                    count5--;
                }
                else if(count5 >= 3) {
                    count5 -= 3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};
