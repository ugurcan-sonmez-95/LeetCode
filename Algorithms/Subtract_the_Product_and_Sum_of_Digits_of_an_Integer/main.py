### Subtract the Product and Sum of Digits of an Integer - Solution

class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        total_sum, product = 0, 1
        while (n > 0):
            total_sum += n % 10
            product *= n % 10
            n //= 10
        diff = product - total_sum 
        return diff