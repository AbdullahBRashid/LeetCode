class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        for (int i = 0; i < s.size(); i++) {

            if (
                (s[i] >= 'A' && s[i] <= 'Z')
            ) {
                s[i] -= 'A' - 'a';
            }
            
            if (
                (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')
            ) {
                x += s[i];
            }
        }

        // cout << x << endl;

        int n = x.size();
        for (int i = 0; i < n/2; i++) {
            if (x[i] != x[n-i-1]) {
                // cout << i << " " << x[i] << " " << x[n-i-1] << endl;
                return false;
            }
        }



        return true;
    }
};