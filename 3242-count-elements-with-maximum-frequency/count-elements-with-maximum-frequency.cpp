class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;

        int total = 0;
        int max_freq = 0;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        for (auto pair: mp) {
            max_freq = max(pair.second, max_freq);
        }

        for (auto pair: mp) {
            if (pair.second == max_freq) total+= max_freq;
        }

        return total;
    }
};