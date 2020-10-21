// Reducing Dishes - Solution

class Solution {
public:
    int maxSatisfaction(std::vector<int> &satisfaction) {
        std::sort(satisfaction.begin(), satisfaction.end());
        int max_sum {}, acc {}, n = satisfaction.size();
        for (int i{n-1}; i >= 0 && satisfaction[i]+acc > 0; i--) {
            acc += satisfaction[i];
            max_sum += acc;
        }
        return max_sum;
    }
};