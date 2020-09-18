// Queries on a Permutation With Key - Solution

class Solution {
public:
    std::vector<int> processQueries(const std::vector<int> &queries, const int m) {
        std::vector<int> P;
        for (int i{1}; i <= m; i++)
            P.push_back(i);
        std::vector<int> result;
        for (auto &num: queries) {
            const int idx = std::find(P.begin(), P.end(), num) - P.begin();
            P.erase(P.begin()+idx);
            P.insert(P.begin(), num);
            result.push_back(idx);
        }
        return result;
    }
};