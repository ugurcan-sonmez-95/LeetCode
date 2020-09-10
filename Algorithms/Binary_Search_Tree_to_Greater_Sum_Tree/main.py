### Binary Search Tree to Greater Sum Tree - Solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def bstToGst(self, root: TreeNode) -> TreeNode:
        self.total_sum = 0
        self.calculateSums(root)
        return root
    
    def calculateSums(self, root):
        if root.right != None:
            self.calculateSums(root.right)
        root.val += self.total_sum
        self.total_sum = root.val
        if root.left != None:
            self.calculateSums(root.left)