class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int *posArr = new int[nums.size()/2];
        // int *negArr = new int[nums.size()/2];
        vector<int> newNums;
        vector<int> posArr, negArr;

        // int posIndex = 0;
        // int negIndex = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                // posArr[posIndex] = nums[i];
                // posIndex++;
                posArr.push_back(nums[i]);
            } else if (nums[i] < 0) {
                // negArr[negIndex] = nums[i];
                // negIndex++;
                negArr.push_back(nums[i]);
            }
        }

        for (int i = 0; i < nums.size() / 2; i++) {
            newNums.push_back(posArr[i]);
            newNums.push_back(negArr[i]);
        }

        return newNums;
    }
};