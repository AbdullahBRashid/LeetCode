class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        long long sign = 0;
        bool started = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && !started) {
                continue;
            } else if (!started && (s[i] == '+' || s[i] == '-')) {
                if (sign != 0) break;
                if (s[i] == '+') {
                    sign = 1;
                } else if (s[i] == '-') {
                    sign = -1;
                }
                started = true;
            } else if (s[i] >= '0' && s[i] <= '9') {
                num *= 10;
                num += s[i] - '0';

                if (num >= 2147483648) {
                    if (sign == 0 || sign == 1) {
                        num = 2147483647;
                    } else {
                        num = 2147483648;
                    }
                    break;
                }
                started = true;
            } else {
                break;
            }
        }

        if (sign == 0) {
            sign = 1;
        }
        return num * sign;
    }
};