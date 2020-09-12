// Maximum Binary Tree - Solution

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
    TreeNode* constructMaximumBinaryTree(std::vector<int> &nums) {
        return findMax(nums, 0, nums.size()-1);
    }
    
    TreeNode* findMax(std::vector<int> &nums, int left, int right) {
        if (left > right) 
            return nullptr;
        int maxIdx {left}, maxValue {nums[left]};
        for (int i{left+1}; i <= right; i++) {
            if (maxValue < nums[i]) {
                maxValue = nums[i];
                maxIdx = i;
            }
        }
        TreeNode *root = new TreeNode(maxValue);
        root->left = findMax(nums, left, maxIdx-1);
        root->right = findMax(nums, maxIdx+1, right);
        return root;
    }
};