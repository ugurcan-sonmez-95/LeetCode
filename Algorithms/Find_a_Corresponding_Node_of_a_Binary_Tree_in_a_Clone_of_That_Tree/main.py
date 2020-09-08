### Find a Corresponding Node of a Binary Tree in a Clone of That Tree - Solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def getTargetCopy(self, original: TreeNode, cloned: TreeNode, target: TreeNode) -> TreeNode:
        if original == None:
            return None
        elif original == target:
            return cloned
        search_left = self.getTargetCopy(original.left, cloned.left, target)
        search_right = self.getTargetCopy(original.right, cloned.right, target)
        return search_left if (search_left != None) else search_right