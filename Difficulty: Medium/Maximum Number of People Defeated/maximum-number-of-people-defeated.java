class Solution {
    int maxPeopleDefeated(int p) {
        
        int x = 1;
        while (p >= (x * x)) {
            p -= (x * x);
            x++;
        }
        return --x;
    }
};
