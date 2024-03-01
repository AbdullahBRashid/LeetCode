class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string newS(s.size(), '0');

        int index = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (index == -1) {
                    index++;
                    newS[s.size() - 1] = '1';
                }
                else newS[index++] = '1';
            }
        }

        return newS;
    }
};