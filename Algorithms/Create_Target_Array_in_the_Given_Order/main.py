### Create Target Array in the Given Order - Solution

class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        new_arr = []
        for i in range(len(nums)):
            new_arr.insert(index[i], nums[i])
        return new_arr