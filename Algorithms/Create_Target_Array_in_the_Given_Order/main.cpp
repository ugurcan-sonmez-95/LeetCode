// Create Target Array in the Given Order - Solution

class Solution {
public:
    std::vector<int> createTargetArray(const std::vector<int> &nums, const std::vector<int> &index) {
        std::vector<int> new_vec;
        for (int i{}; i < nums.size(); i++)
            new_vec.insert(new_vec.begin()+index[i], nums[i]);
        return new_vec;
    }
};