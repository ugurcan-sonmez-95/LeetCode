### Decompress Run-Length Encoded List - Solution

# Solution using list comprehension
class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        decomp_list = tuple(nums[i+1] for i in range(0, len(nums), 2) for _ in range(nums[i]))
        return decomp_list

# Alternative solution
class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        decomp_list = []
        for i in range(0, len(nums), 2):
            for _ in range(nums[i]):
                decomp_list.append(nums[i+1])
        return decomp_list