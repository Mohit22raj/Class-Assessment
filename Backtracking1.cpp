//Rat in a maze problem.

#include <iostream>
using namespace std;

const int N = 4; // Size of the maze

// Function to print the solution path
void printSolution(int sol[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << sol[i][j] << " ";
        cout << endl;
    }
}

// Function to check if the rat can move to cell (x, y)
bool isSafe(int maze[N][N], int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

// Recursive function to solve the Rat in a Maze problem
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    // If (x, y) is the destination, return true
    if (x == N - 1 && y == N - 1) {
        sol[x][y] = 1;
        return true;
    }

    // Check if maze[x][y] is valid
    if (isSafe(maze, x, y)) {
        // Mark (x, y) as part of solution path
        sol[x][y] = 1;

        // Move right
        if (solveMazeUtil(maze, x, y + 1, sol))
            return true;

        // Move down
        if (solveMazeUtil(maze, x + 1, y, sol))
            return true;

        // If no movement works, backtrack
        sol[x][y] = 0;
        return false;
    }

    return false;
}

// Function to solve the Rat in a Maze problem
bool solveMaze(int maze[N][N]) {
    int sol[N][N] = {0}; // Initialize solution matrix with zeros

    if (!solveMazeUtil(maze, 0, 0, sol)) {
        cout << "No solution exists.";
        return false;
    }

    cout << "Solution path:\n";
    printSolution(sol);
    return true;
}

int main() {
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };

    solveMaze(maze);

    return 0;
}
