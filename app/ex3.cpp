// This exercise is to print an initialzied 2D non-negative
// integer grid from an input position.
// You should prompt the user for a row and column value
// in the grid. From this location, you need to print
// each element value in spiral iteration -
// north, east, south, and west.
//
// prepared by Gang-Ryung Uh

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Global constants
const int COLS = 4;  // Number of columns in each array
const int ROWS = 6;  // Number of rows in each array
void showGrid(int[][COLS], int);
void spiralShowGrid(int [][COLS], int, int); // Function prototype

int main()
{
    int grid[6][4] = {{0, 1, 2, 3},
            {10, 11, 12, 13},
            {20, 21, 22, 23},
            {30, 31, 32, 33},
            {40, 41, 42, 43},
            {50, 51, 52, 53}};

    showGrid(grid, ROWS);
    cout << "Type in the current position in the grid: " << flush;
    int row, col;
    cin >> row >> col;

    cout << "Your current position: "
         << "grid[" << row << "]"
         << "[" << col << "]" << endl;

    cout << "\nThe spiral printing contents of initialized grid are:\n";
    spiralShowGrid(grid, row, col);
    return 0;
}

void showGrid(int g[][COLS], int r) {
    cout << fixed << setw(4);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < COLS; j++) {
            cout << fixed << setw(4) << g[i][j];
        }
        cout << endl;
    }
};

void spiralShowGrid(int g[][COLS], int r, int c) {
    cout << "YOU NEED TO IMPLEMENT spiralShowGrid\n";
}
