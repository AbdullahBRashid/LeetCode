class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            bool found = false;
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) continue;
                if (nums[j] == num) found = true;
            }
            if (!found) return num;
        }

        return -1;
    }
};