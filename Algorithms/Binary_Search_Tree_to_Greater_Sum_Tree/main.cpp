// Binary Search Tree to Greater Sum Tree - Solution

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
    int sum {};
    void calculateSums(TreeNode *root) {
        if (root->right != nullptr)
            calculateSums(root->right);
        root->val += sum;
        sum = root->val;
        if (root->left != nullptr) 
            calculateSums(root->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        calculateSums(root);
        return root;
    }
};