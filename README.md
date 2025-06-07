# 🧩 Sudoku Solver in C++

This project implements a simple Sudoku solver using **backtracking** in C++. It takes a 9x9 Sudoku puzzle as input (with empty cells represented by `0`) and fills the grid with valid numbers from 1 to 9, satisfying all Sudoku constraints.

---

## 📌 Features

- Solves any valid 9x9 Sudoku puzzle using backtracking.
- Checks for validity in rows, columns, and 3x3 subgrids.
- Prints the completed Sudoku grid if a solution exists.
- Clean and readable code structure.

---

## 🧠 How It Works

1. **Find an empty cell** (i.e., a cell with value 0).
2. **Try placing numbers** from 1 to 9 in the cell.
3. For each number:
   - Check if placing the number is **valid** (no duplicates in row, column, or 3x3 subgrid).
   - If valid, place the number and recursively try to fill the rest of the grid.
   - If the next step fails, **backtrack** by resetting the cell to 0.
4. Repeat until the grid is completely filled or no solution is possible.

---

## 🧪 Example Input

```cpp
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
