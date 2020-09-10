### Maximum Number of Coins You Can Get - Solution

class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        piles.sort()
        max_coin, n = 0, len(piles)
        for i in range(n//3, n, 2):
            max_coin += piles[i]
        return max_coin