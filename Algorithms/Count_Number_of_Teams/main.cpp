// Count Number of Teams - Solution

// O(n^2): (less_left*greater_right) + (greater_left*less_right)

class Solution {
public:
    int numTeams(const std::vector<int> &rating) {
        int count {};
        for (int i{1}; i < rating.size()-1; i++) {
            int less_left {}, less_right {};
            int greater_left {}, greater_right {};
            for (int j{}; j < i; j++) {
                if (rating[j] < rating[i])
                    less_left++;
                if (rating[j] > rating[i])
                    greater_left++;
            }
            for (int k{i+1}; k < rating.size(); k++) {
                if (rating[k] < rating[i])
                    less_right++;
                if (rating[k] > rating[i])
                    greater_right++;
            }
            count += less_left*greater_right + greater_left*less_right;
        }
        return count;
    }
};