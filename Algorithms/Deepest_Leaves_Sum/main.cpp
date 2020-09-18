// Deepest Leaves Sum - Solution

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
    int deepestLeavesSum(TreeNode* root) {
        const int level {1}; 
        int sum {}, max_level {1};
        calculateDeepest(root, level, sum, max_level);
        return sum;
    }
    
    void calculateDeepest(TreeNode *root, const int level, int &sum, int &max_level) {
        if (root == nullptr)
            return;
        if (level == max_level)
            sum += root->val;
        else if (level > max_level) {
            sum = root->val;
            max_level = level;
        }
        calculateDeepest(root->left, level+1, sum, max_level);
        calculateDeepest(root->right, level+1, sum, max_level);
    }
};