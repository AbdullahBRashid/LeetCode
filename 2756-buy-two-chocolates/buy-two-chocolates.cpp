class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int smallestVals[2] = {0};
        smallestVals[0] = prices[0];
        smallestVals[1] = prices[1];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] <= smallestVals[0]) {
                smallestVals[1] = smallestVals[0];
                smallestVals[0] = prices[i];
            } else if (prices[i] <= smallestVals[1]) {
                smallestVals[1] = prices[i];
            }
        }

        int sum = smallestVals[0] + smallestVals[1];

        if (sum > money) {
            return money;
        } else {
            return money - sum;
        }
    }
};