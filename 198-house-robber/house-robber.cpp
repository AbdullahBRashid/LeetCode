class Solution {
public:
    int rob(vector<int>& nums) {
        int norob = 0, rob = 0;

        for (int i = 0; i < nums.size(); i++) {
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }

        return max(rob, norob);

        
    }
};