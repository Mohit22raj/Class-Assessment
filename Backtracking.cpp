#include <iostream>
using namespace std;

const int N = 4;

// Function to print the board
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

// Function to check if a queen can be placed at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve N-Queens problem
bool solveNQueens(int board[N][N], int col) {
    // If all queens are placed, return true
    if (col >= N)
        return true;

    // Consider this column and try placing this queen in all rows one by one
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            // Place the queen at board[i][col]
            board[i][col] = 1;

            // Recur to place rest of the queens
            if (solveNQueens(board, col + 1))
                return true;

            // If placing queen in board[i][col] doesn't lead to a solution, then backtrack
            board[i][col] = 0; // Backtrack
        }
    }

    // If the queen cannot be placed in any row in this column, then return false
    return false;
}

int main() {
    int board[N][N] = {0}; // Initialize the board with zeros

    if (solveNQueens(board, 0))
        printBoard(board);
    else
        cout << "Solution does not exist.\n";

    return 0;
}
