// Sum of Nodes with Even-Valued Grandparent - Solution

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
    void calculateSum(TreeNode *root, TreeNode *parent, TreeNode *gparent, int &sum) {
        if (root == nullptr) 
            return;
        if (gparent != nullptr && gparent->val % 2 == 0)
            sum += root->val;
        calculateSum(root->left, root, parent, sum);
        calculateSum(root->right, root, parent, sum);
    }
    
    int sumEvenGrandparent(TreeNode *root) {
        TreeNode *parent = nullptr, *gparent = nullptr;
        int sum {};
        calculateSum(root, parent, gparent, sum);
        return sum;
    }
};