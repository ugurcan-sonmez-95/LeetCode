// Jewels and Stones - Solution

class Solution {
public:
    int numJewelsInStones(const std::string &J, const std::string &S) {
        int count {};
        for (auto &ch: S) {
            auto find = std::find(J.begin(), J.end(), ch);
            if (find != J.end())
                count++;
        }
        return count;
    }
};