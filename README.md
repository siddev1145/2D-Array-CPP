# 2D-Array-CPP

Experiment 8

## AIM
To explore and implement 2-dimensional arrays in C++.

## Software Used 
VS Code

## Theory
A 2D array is a data structure organized in a grid format, where each element is accessed by two indices: a row index and a column index.

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};
```

**Features of 2D Arrays:**

- **Structure:** A 2D array is essentially an array of arrays, where each element of the outer array represents a row.
- **Indexing:** Elements are accessed using two indices.
- **Contiguous Memory:** In C++, 2D arrays are stored as a single contiguous block in memory.
- **Operations:** Various operations can be performed on 2D arrays, including addition, subtraction, and multiplication (for matrices).

**Uses of 2D Arrays:**

- Employed in computer graphics and image processing.
- Utilized in scientific simulations and spreadsheets.
- Represent mathematical matrices.

Example:

| 1 | 2 | 3 |
|---|---|---|
| 4 | 5 | 6 |
| 7 | 8 | 9 |

## Algorithm

### Input and Display a 2D Array

1. **Start**
2. **Input:**
   - Prompt the user for the number of rows (`r`).
   - Prompt for the number of columns (`c`).
3. **Initialize:**
   - Create a 2D array `arr[r][c]`.
4. **Input Elements:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Prompt the user to enter the element at position `(i+1, j+1)`.
       - Store the value in `arr[i][j]`.
5. **Display Matrix:**
   - For each row `i` from 0 to `r-1`:
     - For each column `j` from 0 to `c-1`:
       - Print `arr[i][j]` followed by a space.
     - Print a newline after each row.
6. **End**

### Sum of Diagonal Elements in a Square Matrix

1. **Start**
2. **Initialize:**
   - Set `r` and `c` (both equal to 3).
   - Define a 2D array `a` with these elements:
     ```
     1 2 3
     5 7 4
     5 9 1
     ```
   - Initialize `sum` to 0.
3. **Check Matrix:**
   - If `r` equals `c` (the matrix is square):
     1. **Display Matrix:**
        - For each row `i` from 0 to `r-1`:
          - For each column `j` from 0 to `c-1`:
            - Print `a[i][j]` followed by a space.
          - Print a newline after each row.
  
     2. **Sum of Diagonals:**
        - For each row `i` from 0 to `r-1`:
          - If `i` equals `j` (the element is on the main diagonal):
            - Add `a[i][j]` to `sum`.
  
     3. **Display Result:**
        - Print "The sum of diagonals is: " followed by `sum`.

   - If `r` does not equal `c`:
     - Print "Input should be a square matrix."
4. **End**

### Sum of Antidiagonals of a 3x3 Matrix

1. **Start**
2. **Initialize:**
   - Define a matrix `a` with the following values:
     ```
     1 2 3
     5 7 4
     5 9 1
     ```
   - Set `sum` to 0.
   - Set `r` (number of rows) to 3.
3. **Compute Sum of Antidiagonals:**
   - For each row `i` from 0 to 2:
     - If `i + j == r - 1`:
       - Add `a[i][j]` to `sum`.
4. **Display Result:**
   - Print "The sum of antidiagonals is: " followed by `sum`.
5. **End**

## Conclusion
We explored the applications of 2-dimensional arrays in C++.
