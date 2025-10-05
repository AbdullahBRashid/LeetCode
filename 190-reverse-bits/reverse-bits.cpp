class Solution {
public:
    int reverseBits(int n) {
        int x = 0;
        int mask = 0b1;

        for (int i = 0; i < 32; i++) {
            x = x << 1;
            if ((n & mask) != 0) {
                x +=1;
            }
            mask = mask << 1;
        }

        return x;
    }
};