// Running Sum of 1d Array - Solution

class Solution {
public:
    std::vector<int> runningSum(std::vector<int> &nums) {
        std::partial_sum(nums.begin(), nums.end(), nums.begin());
        return nums;
    }
};