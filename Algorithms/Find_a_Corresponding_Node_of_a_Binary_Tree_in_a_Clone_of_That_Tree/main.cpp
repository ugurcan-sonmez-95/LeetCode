// Find a Corresponding Node of a Binary Tree in a Clone of That Tree - Solution

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
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target) {
        if (original == nullptr)
            return nullptr;
        else if (original == target)
            return cloned;
        TreeNode *search_left = getTargetCopy(original->left, cloned->left, target); 
        TreeNode *search_right = getTargetCopy(original->right, cloned->right, target);
        return search_left != nullptr ? search_left : search_right;
    }
};