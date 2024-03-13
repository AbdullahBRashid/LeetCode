class Solution {
public:
    int pivotInteger(int n) {
        int lhs = 0;
        int rhs = 0;

        int pivot;

        for (int i = 0; i <= n; i++) {
            rhs += i;
        }
        
        for (int i = 1; i <= n; i++) {
            lhs += i;
            rhs -= i-1;

            if (lhs == rhs) return i;
        }

        return -1;


    }
};