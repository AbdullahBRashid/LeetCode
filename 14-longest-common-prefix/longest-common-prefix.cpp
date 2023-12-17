class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = "";
        bool is_different = false;
        char cur_let = '\0';
        int i,j;
        int size = strs.size();

        string first_word = strs.at(0);


        for (i = 0; (!is_different && first_word[i] != '\0'); i++) {
            cur_let = first_word[i];
            for (j = 0; j < size; j++) {
                if (strs.at(j)[i] != cur_let) {
                    is_different = true;
                    break;
                }
            }
            if (!is_different) {
                longestPrefix += cur_let;
            }
        }
        return longestPrefix;
    }
};