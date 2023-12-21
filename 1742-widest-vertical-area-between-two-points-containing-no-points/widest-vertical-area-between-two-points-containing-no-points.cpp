class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());

        int max_diff = 0;
        int cur_diff = 0;
        for (int i = 0; i < points.size() - 1; i++) {
            cur_diff = points[i+1][0] - points[i][0];
            max_diff = max(max_diff, cur_diff);
        }

        return max_diff;
    }
};