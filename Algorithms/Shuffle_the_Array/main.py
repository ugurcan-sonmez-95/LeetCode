### Shuffle the Array - Solution

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        newArr = []
        for i in range(n):
            newArr.append(nums[i])
            newArr.append(nums[i+n])
        return newArr