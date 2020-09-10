// Maximum Number of Coins You Can Get - Solution

class Solution {
public:
    int maxCoins(std::vector<int> &piles) {
        std::sort(piles.begin(), piles.end());
        int max_coin {};
        size_t n {piles.size()};
        for (size_t i{n/3}; i < n; i += 2) 
            max_coin += piles[i];
        return max_coin;
    }
};