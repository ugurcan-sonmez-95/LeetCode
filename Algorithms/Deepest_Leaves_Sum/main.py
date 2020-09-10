### Deepest Leaves Sum - Solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def deepestLeavesSum(self, root: TreeNode) -> int:
        self.max_level, level, self.deepest_sum = 1, 1, 0
        self.calculateDeepest(root, level)
        return self.deepest_sum
    
    def calculateDeepest(self, root, level):
        if root == None:
            return
        if level == self.max_level:
            self.deepest_sum += root.val
        elif level > self.max_level:
            self.deepest_sum = root.val
            self.max_level = level
        self.calculateDeepest(root.left, level+1)
        self.calculateDeepest(root.right, level+1)