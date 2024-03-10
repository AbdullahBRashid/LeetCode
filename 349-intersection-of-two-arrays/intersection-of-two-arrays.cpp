class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        vector<int> arr;

        for (int i = 0; i < nums1.size(); i++) {
            mp1[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++) {
            mp2[nums2[i]]++;
        }


        for (auto pair: mp1) {
            if (mp2[pair.first]) arr.push_back(pair.first);
        }

        return arr;
    }
};