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
    bool f = true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!q and !p) return true;
        if (!p or !q) return false;
        if (p->val != q->val) return false;
        f = (isSameTree(p->left, q->left) and isSameTree(p->right, q->right));
        return f;
    }
    bool isSubtree(TreeNode* p, TreeNode* q) {
        if (!q and !p) return true;
        if (!p or !q) return false;
        if (isSameTree(p, q)) return true;

        return isSubtree(p->left, q) || isSubtree(p->right, q);
    }
};