// How Many Numbers Are Smaller Than the Current Number - Solution

// Solution 1: O(n^2) => Brute Force
class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(const std::vector<int> &nums) {
        std::vector<int> count(nums.size());
        for (int i{}; i < nums.size(); i++) {
            for (int j{}; j < nums.size(); j++) 
                if (i != j && nums[i] > nums[j])
                    count[i]++;
        }
        return count;
    }
};

// Solution 2: O(n) => Counting Sort
class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(const std::vector<int> &nums) {
        std::vector<int> count(101);
        for (auto &num: nums)
            count[num]++;
        for (int i{1}; i < count.size(); i++)
            count[i] += count[i-1];
        std::vector<int> result;
        for (auto &num: nums)
            result.push_back(num == 0 ? 0 : count[num-1]);
        return result;
    }
};