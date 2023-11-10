class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long long int temp = x, reversed = 0;
        while (temp != 0) {
            reversed = (reversed * 10) + (temp % 10);
            temp /= 10;
        }

        if (reversed == x) return true;
        else return false;
    }
};