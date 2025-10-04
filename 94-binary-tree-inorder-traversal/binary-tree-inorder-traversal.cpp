/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void traverse(TreeNode* ptr, vector<int>& v) {
        if (ptr == nullptr) {
            return;
        }

        traverse(ptr->left, v);
        v.push_back(ptr->val);
        traverse(ptr->right, v);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;

        traverse(root, v);

        return v;
    }
};