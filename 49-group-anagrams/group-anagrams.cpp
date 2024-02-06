class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ana;
        unordered_map<string, vector<string>> mp;

        for(auto string: strs) {
            char count[27] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};

            for (char c: string) {
                count[c-'a']++;
            }
            mp[count].push_back(string);
        }

        for(auto pair: mp) {
            ana.push_back(pair.second);
        }
        
        return ana;
    }
};