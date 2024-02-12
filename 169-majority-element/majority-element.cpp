class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int count = 0;
        int highest_count = 0;
        int num = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                if (count > highest_count) {
                    highest_count = count;
                    num = nums[i-1];
                }
                count = 0;
            }

            count++;
        }

        if (count > highest_count) num = nums[nums.size()-1];


        return num;
    }
};