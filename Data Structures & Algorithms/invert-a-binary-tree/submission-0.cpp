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
    TreeNode* inv(TreeNode* root){
        if(!root)return NULL;
           TreeNode* a=root->left;
           root->left=root->right;
           root->right=a;
           inv(root->left);
        
           inv(root->right);
           return root;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return NULL;
        return inv(root);
    }
};