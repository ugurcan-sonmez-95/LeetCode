### Count Number of Teams - Solution

### O(n^2): (less_left*greater_right) + (greater_left*less_right)

class Solution:
    def numTeams(self, rating: List[int]) -> int:
        count = 0
        for i in range(1, len(rating)-1):
            less_left, less_right = 0, 0
            greater_left, greater_right = 0, 0
            for j in range(i):
                if rating[j] < rating[i]:
                    less_left += 1
                if rating[j] > rating[i]:
                    greater_left += 1
            for k in range(i+1, len(rating)):
                if rating[k] < rating[i]:
                    less_right += 1
                if rating[k] > rating[i]:
                    greater_right += 1
            count += less_left*greater_right + greater_left*less_right
        return count