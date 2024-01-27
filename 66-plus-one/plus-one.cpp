class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    
        for (int i = 0; i < digits.size(); i++) {
            int index = digits.size()-1-i;
            digits[index]++;
            if (digits[index] == 10) {
                if (index == 0) {
                    digits[index] = 1;
                    digits.push_back(0);
                    break;
                } else
                digits[index] = 0;
            } else {
                break;
            }
        }

        return digits;
    }
};