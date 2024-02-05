class Solution {
public:
    void remove(int t, queue<int>& q)
    {

        queue<int> ref;
        int s = q.size();
        int cnt = 0;

        while (q.front() != t and !q.empty()) {
            ref.push(q.front());
            q.pop();
            cnt++;
        }

        if (q.empty()) {
            while (!ref.empty()) {

                q.push(ref.front());
                ref.pop();
            }
        }

        else {
            q.pop();
            while (!ref.empty()) {

                q.push(ref.front());
                ref.pop();
            }
            int k = s - cnt - 1;
            while (k--) {

                int p = q.front();
                q.pop();
                q.push(p);
            }
        }
        }

    int firstUniqChar(string s) {
        int index = -1;
        
        unordered_map<char, int> mp;
        queue<int> q;

        for (int i = 0; i < s.size(); i++) {
            if (mp.count(s.at(i))) {
                remove(mp[s[i]], q);
            }

            else {
                mp[s[i]] = i;
                q.push(i);
            }
        }

        if (!q.empty()) {
            index = q.front();
        }

        return index;
    }
};