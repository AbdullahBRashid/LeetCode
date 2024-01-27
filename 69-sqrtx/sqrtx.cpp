class Solution {
public:
    int mySqrt(int x) {
        for (int i = 1; i <= x; i++) {
            if (x / i == i) return i;
            else if (i > x / i) return i - 1;
        }
        return 0;
    }
};