// Subrectangle Queries - Solution

class SubrectangleQueries {
public:
    std::vector<std::vector<int>> new_rect, update_rect;
    SubrectangleQueries(const std::vector<std::vector<int>> &rectangle) {
        new_rect = rectangle;
    }
    
    void updateSubrectangle(const int row1, const int col1, const int row2, const int col2, const int newValue) {
        update_rect.push_back({row1, col1, row2, col2, newValue});
    }
    
    int getValue(const int row, const int col) {
        for (int i = update_rect.size()-1; i >= 0; i--)
            if ((update_rect[i][0] <= row) && (update_rect[i][1] <= col) && (row <= update_rect[i][2]) && (col <= update_rect[i][3]))
                return update_rect[i][4];
        return new_rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */