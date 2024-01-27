class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i != 0 && s[i] != ' ' && s[i-1] == ' ' && s[i-1] != 0) count = 1;
            else if (s[i] == ' ') continue;
            else count++;
        }

        return count;
    }
};