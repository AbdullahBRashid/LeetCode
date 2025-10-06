class Solution {
public:

    void findSubsets(vector<int>& nums, vector<vector<int>>& result, vector<int> cur, int n, int size) {
        if (n >= size) {
            result.push_back(cur);
            return;
        }

        findSubsets(nums, result, cur, n+1, size);
        cur.push_back(nums[n]);
        findSubsets(nums, result, cur, n+1, size);

    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> result;
        vector<int> cur;

        findSubsets(nums, result, cur, 0, nums.size());

        return result;
    }
};