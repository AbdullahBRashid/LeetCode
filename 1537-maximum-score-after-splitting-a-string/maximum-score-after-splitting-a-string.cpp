class Solution {
public:
    int maxScore(string s) {
        int highest_score = 0;
        int cur_score = 0;
        for (int i = 0; i < s.size(); i++) {
            cur_score = 0;
            for (int j = 0; j < s.size(); j++) {
                if (j <= i  && j != s.size()-1) {
                    if (s[j] == '0') cur_score++;
                } else if (j > i) {
                    if (s[j] == '1') cur_score++;
                }
            }
            highest_score = max(cur_score, highest_score);
        }
        return highest_score;
    }
};