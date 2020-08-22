### Kids With the Greatest Number of Candies - Solution

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        checkGreatest = []
        maxNum = max(candies)
        for num in candies:
            if num+extraCandies >= maxNum:
                checkGreatest.append(True)
            else:
                checkGreatest.append(False)
        return checkGreatest