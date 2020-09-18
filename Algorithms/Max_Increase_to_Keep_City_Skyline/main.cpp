// Max Increase to Keep City Skyline - Solution

class Solution {
public:
    int maxIncreaseKeepingSkyline(const std::vector<std::vector<int>> &grid) {
        std::vector<int> max_row(grid.size(), 0);
        std::vector<int> max_col(grid[0].size(), 0);
        for (int i{}; i < grid.size(); i++) {
            for (int j{}; j < grid[0].size(); j++) {
                max_row[i] = std::max(max_row[i], grid[i][j]);
                max_col[i] = std::max(max_col[i], grid[j][i]);
            }
        }
        int total_sum {};
        for (int k{}; k < grid.size(); k++) {
            for (int l{}; l < grid[0].size(); l++) 
                if (grid[k][l] < max_row[k] && grid[k][l] < max_col[l])
                    total_sum += std::min(max_row[k]-grid[k][l], max_col[l]-grid[k][l]);
        }
        return total_sum;
    }
};