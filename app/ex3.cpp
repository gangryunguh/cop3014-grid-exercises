// This exercise is to print an initialized 2D non-negative
// grid from an input position.
// You should prompt the user for a row and column value
// in the grid. From this location, you need to print
// each element value in north, west, south, and east.
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
bool finished(int [][COLS]);  // utility function to tell whether
                              // still work to do for the spiral printing
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

    // You need to implement
    cout << "You need to implement showGrid() routine\n";



};


bool finished(int s[][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            if (s[i][j] == 0)
                return false;
    return true;
}

void spiralShowGrid(int g[][COLS], int r, int c) {
    cout << "YOU NEED TO IMPLEMENT spiralShowGrid\n";

    int states[ROWS][COLS] = {0}; // initialize every element to 0
    int steps = 1;
    states[r][c] = steps;
    do {
        // need to implement this part
    } while (finished(states));
}
