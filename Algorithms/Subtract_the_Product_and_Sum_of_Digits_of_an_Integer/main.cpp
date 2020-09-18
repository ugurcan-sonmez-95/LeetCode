// Subtract the Product and Sum of Digits of an Integer - Solution

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum {}, product {1};
        while (n > 0) {
            sum += n % 10;
            product *= n % 10;
            n /= 10;
        }
        const int diff {product - sum};
        return diff;
    }
};