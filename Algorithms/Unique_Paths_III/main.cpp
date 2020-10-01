// Unique Paths III - Solution

class Solution {
public:
    int uniquePathsIII(std::vector<std::vector<int>> &grid) {
        int total_steps {}, x, y;
        for (int i{}; i < grid.size(); i++) {
            for (int j{}; j < grid[0].size(); j++) {
                if (grid[i][j] == 1)
                    x = i, y = j;
                if (grid[i][j] != -1)
                    total_steps++;
            }
        }
        const int result = dfs(x, y, 1, total_steps, grid);
        return result;
    }
    
    int dfs(int x, int y, int steps, const int total_steps, std::vector<std::vector<int>> &grid) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1)
            return 0;
        if (grid[x][y] == 2) 
            return steps == total_steps ? 1 : 0;
        grid[x][y] = -1;
        const int path_count = dfs(x+1, y, steps+1, total_steps, grid) + dfs(x-1, y, steps+1, total_steps, grid) + dfs(x, y+1, steps+1, total_steps, grid) + dfs(x, y-1, steps+1, total_steps, grid);
        grid[x][y] = 0;
        return path_count;
    }
};