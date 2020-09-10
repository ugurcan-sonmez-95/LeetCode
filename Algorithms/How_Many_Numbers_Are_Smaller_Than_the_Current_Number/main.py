### How Many Numbers Are Smaller Than the Current Number - Solution

# Solution 1: O(n^2) => Brute Force
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count = [0]*len(nums)
        for i in range(len(nums)):
            for j in range(len(nums)):
                if (i != j) and (nums[i] > nums[j]):
                    count[i] += 1
        return count

# Solution 2: O(n) => Counting Sort
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        count = [0]*101
        for num in nums:
            count[num] += 1
        for i in range(1, len(count)):
            count[i] += count[i-1]
        result = []
        for num in nums:
            result.append(0 if num == 0 else count[num-1])
        return result