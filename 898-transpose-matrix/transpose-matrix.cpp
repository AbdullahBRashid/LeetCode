class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i, j;
        vector<vector<int>> transposeMatrix(matrix[0].size(), vector<int>());

        for (i = 0; i < matrix.size(); i++) {
            for (j = 0; j < matrix[i].size(); j++) {
                transposeMatrix[j].push_back(matrix[i][j]);
            }
        }

        return transposeMatrix;
    }
};