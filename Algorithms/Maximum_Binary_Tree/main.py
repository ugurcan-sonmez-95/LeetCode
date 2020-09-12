### Maximum Binary Tree - Solution

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def constructMaximumBinaryTree(self, nums: List[int]) -> TreeNode:
        return self.findMax(nums, 0, len(nums)-1)
    
    def findMax(self, nums, left, right):
        if left > right:
            return None
        max_index, max_value = left, nums[left]
        for i in range(left+1, right+1):
            if max_value < nums[i]:
                max_value = nums[i]
                max_index = i
        root = TreeNode(max_value)
        root.left = self.findMax(nums, left, max_index-1)
        root.right = self.findMax(nums, max_index+1, right)
        return root