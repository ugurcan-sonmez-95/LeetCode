### Max Increase to Keep City Skyline - Solution

class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        max_row, max_col = [0]*len(grid), [0]*len(grid[0])
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                max_row[i] = max(max_row[i], grid[i][j])
                max_col[i] = max(max_col[i], grid[j][i])
        total_sum = 0
        for k in range(len(grid)):
            for l in range(len(grid[0])):
                if (grid[k][l] < max_row[k]) and (grid[k][l] < max_col[l]):
                    total_sum += min(max_row[k]-grid[k][l], max_col[l]-grid[k][l])
        return total_sum