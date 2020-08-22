// Kids With the Greatest Number of Candies - Solution

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies) {
        std::vector<bool> checkGreatest;
        for (auto &num: candies) {
            num += extraCandies;
            if (*std::max_element(candies.begin(), candies.end()) == num)
                checkGreatest.push_back(true);
            else
                checkGreatest.push_back(false);
            num -= extraCandies;
        }
        return checkGreatest;
    }
};