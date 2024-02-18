class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int max_num = 0;
        for (int j = 0; j < matrix[0].size(); j++) {
            max_num = matrix[0][j];

            for (int i = 0; i < matrix.size(); i++) {
                max_num = max(matrix[i][j], max_num);
            }

            for (int i = 0; i < matrix.size(); i++) {
                if (matrix[i][j] == -1) matrix[i][j] = max_num;
            }
        }

        return matrix;
    }
};