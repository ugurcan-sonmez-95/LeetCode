### Unique Paths III - Solution

class Solution:
    def uniquePathsIII(self, grid: List[List[int]]) -> int:
        self.path_count, zero_count = 0, 1
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    x, y = i, j
                if grid[i][j] == 0:
                    zero_count += 1
        result = self.dfs(x, y, zero_count, grid)
        return result
        
    def dfs(self, x, y, zero_count, grid):
        if not ((0 <= x < len(grid)) and (0 <= y < len(grid[0])) and (grid[x][y] >= 0)):
                return
        if grid[x][y] == 2:
                self.path_count += zero_count == 0
                return
        grid[x][y] = -1
        self.dfs(x+1, y, zero_count-1, grid)
        self.dfs(x-1, y, zero_count-1, grid)
        self.dfs(x, y+1, zero_count-1, grid)
        self.dfs(x, y-1, zero_count-1, grid)
        grid[x][y] = 0
        return self.path_count