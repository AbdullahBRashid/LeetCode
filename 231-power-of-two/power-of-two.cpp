class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        int count = 0;
        while ( n != 0) {
            int bit = n & 1;
            if (bit == 1) count++;
            n >>= 1;
        }
        if (count == 0 || count == 1) return true;
        return false;
    }
};