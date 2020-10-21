### Reducing Dishes - Solution

class Solution:
    def maxSatisfaction(self, satisfaction: List[int]) -> int:
        satisfaction.sort()
        max_sum, acc, i = 0, 0, len(satisfaction)-1
        while (i >= 0) and (satisfaction[i]+acc > 0):
            acc += satisfaction[i]
            max_sum += acc
            i -= 1
        return max_sum