// Shuffle String - Solution

class Solution {
public:
    std::string restoreString(const std::string &s, const std::vector<int> &indices) {
        std::string final_s;
        final_s.resize(s.size(), 'a');
        for (int i{}; i < s.size(); i++) 
            final_s[indices[i]] = s[i];
        return final_s;
    }
};