class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> newNums;
        vector<int> posArr, negArr;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                posArr.push_back(nums[i]);
                continue;
            }
            negArr.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size() / 2; i++) {
            newNums.push_back(posArr[i]);
            newNums.push_back(negArr[i]);
        }

        return newNums;
    }
};