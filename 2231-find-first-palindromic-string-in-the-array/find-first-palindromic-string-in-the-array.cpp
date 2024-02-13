class Solution {
public:
    bool checkPalindrome(string word) {
        bool isPalindrome = true;
        for (int i = 0; i < word.size()/2; i++) {
            if (word[i] != word[word.size() - i - 1]) {
                isPalindrome = false;
            }
        }
        return isPalindrome;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (checkPalindrome(words[i])) return words[i];
        }
        return "";
    }
};