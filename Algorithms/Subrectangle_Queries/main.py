### Subrectangle Queries - Solution

class SubrectangleQueries:
    
    def __init__(self, rectangle: List[List[int]]):
        self.new_rect = copy.deepcopy(rectangle)
        self.update_rect = []
        
    def updateSubrectangle(self, row1: int, col1: int, row2: int, col2: int, newValue: int) -> None:
        self.update_rect.append([row1, col1, row2, col2, newValue])   

    def getValue(self, row: int, col: int) -> int:
        for r in reversed(self.update_rect):
            if (r[0] <= row <= r[2]) and (r[1] <= col <= r[3]):
                return r[4]
        return self.new_rect[row][col]
        


# Your SubrectangleQueries object will be instantiated and called as such:
# obj = SubrectangleQueries(rectangle)
# obj.updateSubrectangle(row1,col1,row2,col2,newValue)
# param_2 = obj.getValue(row,col)