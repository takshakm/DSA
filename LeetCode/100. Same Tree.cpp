/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base case: if both nodes are NULL, the trees are the same
        if (p == NULL && q == NULL) {
            return true;
        }
        // Edge case: if one of the nodes is NULL, the trees are not the same
        if (p == NULL || q == NULL) {
            return false;
        }
        // If the values of the nodes are not the same, the trees are not the same
        if (p->val != q->val) {
            return false;
        }
        // Recursively check the left and right subtrees
        // If both are same then return true
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};
