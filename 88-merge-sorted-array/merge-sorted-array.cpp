class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = 0;
        int i2 = 0;
        int i = 0;

        vector<int> nums(m);
        for (int i = 0; i < m; i++) {
            nums[i] = nums1[i];
        }

        while (i1 < m && i2 < n) {
            if (nums[i1] <= nums2[i2]) {
                nums1[i] = nums[i1];
                i1++;
            } else {
                nums1[i] = nums2[i2];
                i2++;
            }
            i++;
        }

        while (i1 < m) {
            nums1[i] = nums[i1];
            i1++;
            i++;
        }

        while (i2 < n) {
            nums1[i] = nums2[i2];
            i2++;
            i++;
        }
    }
};