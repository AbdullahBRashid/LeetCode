class Solution {
public:

    struct Check {
        int x;
        int y;
    };

    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size(); // Num of rows
        int m = matrix[0].size(); // Num of columns

        // vector<bool> rowCheck(n, false); 
        // vector<bool> colCheck(m, false);

        vector<Check> check;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    check.push_back(Check{i, j});
                }
            }
        }

        // for (int i = 0; i < check.size(); i++) {
        //     cout << check[i].x << " " << check[i].y << endl;
        // }

        for (int p = 0; p < check.size(); p++) {
            int i = check[p].x;
            int j = check[p].y;

            // if (rowCheck[i] == true || colCheck[j] == true) {
            //     continue;
            // }

            for (int k = 0; k < m; k++) {
                matrix[i][k] = 0;
            }

            for (int k = 0; k < n; k++) {
                matrix[k][j] = 0;
            }

            // rowCheck[i] = true;
            // colCheck[j] = true;
        }       
    }
};