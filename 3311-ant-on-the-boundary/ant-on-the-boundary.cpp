class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cur_pos = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            cur_pos += nums[i];

            if (cur_pos == 0) count++;
        }

        return count;
    }
};