class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> newDigits;

        newDigits = digits;
        
        for (int i = 0; i < digits.size(); i++) {
            int index = digits.size()-1-i;
            newDigits[index]++;
            if (newDigits[index] == 10) {
                if (index == 0) {
                    newDigits[index] = 1;
                    newDigits.push_back(0);
                } else
                newDigits[index] = 0;
            } else {
                break;
            }
        }

        return newDigits;
    }
};