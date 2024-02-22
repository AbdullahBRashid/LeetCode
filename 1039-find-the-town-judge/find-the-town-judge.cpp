class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (trust.size() == 0 && n != 1) return -1;
        else if (trust.size() == 0 && n == 1) return 1;

        unordered_map<int, int> mp;

        for (int i = 0; i < trust.size(); i++) {
            mp[trust[i][1]]++;
        }

        for (std::unordered_map<int, int>::iterator pair = mp.begin(); pair != mp.end();) {
            bool sm = true;
            for (int i = 0; i < trust.size(); i++) {
                if (trust[i][0] == pair->first) {
                    pair = mp.erase(pair);
                    sm  = false;
                    break;
                }
            }
            if (pair == mp.end()) break;
            if (sm) pair++;
        }

        if (mp.size() != 1) return -1;
        for (auto pair:mp) {
            if (pair.second != n-1) return -1;
            return pair.first;
        }
        return -1;
    }
};