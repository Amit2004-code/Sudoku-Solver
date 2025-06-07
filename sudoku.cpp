using namespaces std;

bool isValid(int grid[9][9],int row ,int col){

    for(int i=0;i<9;i++){
        if(grid[row][i]==num || grid[i][col]==num){
            return false;
        }
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if (grid[i][j] == num)
                return false;
        }
    }

    return true;
    }
    bool findEmptyCell(int grid[9][9], int &row, int &col) {
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0)
                return true;
        }
    }
    return false;
    bool solveSudoku(int grid[9][9]) {
    int row, col;

    if (!findEmptyCell(grid, row, col)) {
        return true; // No empty cell, solution found
    }

    for (int num = 1; num <= 9; num++) {
        if (isValid(grid, row, col, num)) {
            grid[row][col] = num;

            if (solveSudoku(grid))
                return true;

            grid[row][col] = 0; // Backtrack
        }
    }

    return false;
}

void printGrid(int grid[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int grid[9][9] = {
        {0, 0, 4, 7, 0, 6, 3, 0, 0},
        {0, 9, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 5, 0, 0, 1, 2, 8, 0},
        {0, 0, 0, 8, 0, 7, 0, 6, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {5, 6, 0, 3, 0, 2, 0, 0, 0},
        {0, 3, 7, 1, 0, 0, 5, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 0},
        {0, 0, 9, 6, 0, 8, 7, 0, 0}
    };

    if (solveSudoku(grid)) {
        cout << "Solved Sudoku:\n";
        printGrid(grid);
    } else {
        cout << "No solution exists.\n";
    }

    return 0;
}
    };