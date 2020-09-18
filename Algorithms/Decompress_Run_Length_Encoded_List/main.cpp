// Decompress Run-Length Encoded List - Solution

class Solution {
public:
    std::vector<int> decompressRLElist(const std::vector<int> &nums) {
        std::vector<int> decomp_list;
        for (int i{}; i < nums.size(); i += 2)
            decomp_list.insert(decomp_list.end(), nums[i], nums[i+1]);
        return decomp_list;
    }
};