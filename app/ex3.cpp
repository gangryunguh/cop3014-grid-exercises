// This exercise is to print an initialzied 2D positive
// integer grid from an input position.
// You should prompt the user for a row and column value
// in the grid. From this location, you need to print
// each element value in spiral iteration -
// north, west, south, and east.
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
    int grid[6][4] = {{1, 2, 3, 4},
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

bool notFinished(int s[][COLS]) {
    for (int i = 0; i < ROWS; ++i)
        for (int j = 0; j < COLS; ++j)
            if (s[i][j] == 0)
                return true;
    return false;
}

void spiralShowGrid(int g[][COLS], int r, int c) {

    cout << "\nspiralShowGrid:";

    int states[ROWS][COLS] = {0}; // initialize every element to 0
    int steps = 1;

    do {
        cout << setw(10) << g[r][c] << flush;
        states[r][c] = steps;
        cout << endl;

        // north
        if  (r > 0 && !states[r-1][c]) {
            r = r-1;
        }
            // west
        else if (c >  0  && !states[r][c-1]) {
            c = c-1;
        }
            // south
        else if (r < ROWS-1 && !states[r+1][c]) {
            r = r+1;
        }
            // west
        else if (c < COLS-1 && !states[r][c+1]) {
            c = c+1;
        }
        else {
            cerr << "I am stuck....(:(:" << endl;
        }
    } while (notFinished(states));
}
