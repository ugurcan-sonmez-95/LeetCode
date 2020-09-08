### Sum of Nodes with Even-Valued Grandparent - Solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def calculateSum(self, root, parent, gparent):
        total_sum = 0
        if root == None:
            return 0
        if (gparent != None) and (gparent.val % 2 == 0):
            total_sum += root.val
        total_sum += self.calculateSum(root.left, root, parent)
        total_sum += self.calculateSum(root.right, root, parent)
        return total_sum
    
    def sumEvenGrandparent(self, root: TreeNode) -> int:
        parent, gparent = None, None
        result = self.calculateSum(root, parent, gparent)
        return result