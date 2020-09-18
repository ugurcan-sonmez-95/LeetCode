// Shuffle the Array - Solution

class Solution {
public:
    std::vector<int> shuffle(const std::vector<int> &nums, const int n) {
        std::vector<int> newVec;
        for (int i{}; i < n; i++) {
            newVec.push_back(nums[i]);
            newVec.push_back(nums[i+n]);
        }
        return newVec;
    }
};