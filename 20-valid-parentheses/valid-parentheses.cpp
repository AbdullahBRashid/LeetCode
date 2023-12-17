class Solution {
public:
    bool is_open(char c) {
        if (c == '{' || c == '(' || c == '[') return true;
        else return false;
    }

    bool valid_closing(char c1, char c2) {
        if (c1 == '{' && c2 == '}') return true;
        else if (c1 == '[' && c2 == ']') return true;
        else if (c1 == '(' && c2 == ')') return true;
        else return false;
    }

    bool isValid(string s) {
        bool valid = true;

        char arr[10000] = "\0";

        int j = 0;

        char cur_open = '\0';        
        for (int i = 0; i < s.size(); i++) {
            if ( cur_open == '\0' && (!is_open(s[i]))) {
                valid = false;
                break;
            }

            if (is_open(s[i])) {
                arr[j] = cur_open;
                cur_open = s[i];
                j++;
            } else if (valid_closing(cur_open, s[i])) {
                arr[j] = '\0';
                j--;
                cur_open = arr[j];
            } else {
                valid = false;
                break;
            }
        }
        if (j != 0) valid = false;
        return valid;
    }
};