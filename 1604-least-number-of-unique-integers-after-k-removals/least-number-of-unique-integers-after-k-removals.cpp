class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int num = 0;

        unordered_map<int, int> mp;
        vector<int> freq;

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        for (auto pair:mp) {
            freq.push_back(pair.second);
        }
        sort(freq.begin(),freq.end());

        for (int i = 0; i < freq.size() && k != 0; i++) {
            if (k > freq[i]) {
                k -= freq[i];
                freq[i] = 0;
            } else {
                freq[i] -= k;
                k = 0;
            }
        }

        for (int i = 0; i < freq.size(); i++) {
            if (freq[i]!= 0) num++;
        }


        return num;
    }
};