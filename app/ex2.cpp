// This exercise is to initialize 2D grid from an input file and
// print this 2D grid. The input file should  first contain two
// integer values representing the number of rows and columns
// in the grid.
// Implement two functions - initGrid and showGrid
//
// prepared by Gang-Ryung Uh

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Global constants
const int MAXCOLS = 50;  // Number of columns in each array
void initGrid(ifstream &, int [][MAXCOLS], int, int);  // Function prototype
void showGrid(int [][MAXCOLS], int, int); // Function prototype

int main()
{
    cout << "Type in the name of the input file: " << flush;
    string filename;
    cin >> filename;
    ifstream fin(filename);

    int rows, cols;
    if (!fin) {
        cout << "Cannot open the input file " << filename << endl;
        exit(1);
    }
    fin >> rows >> cols;
    int grid[rows][MAXCOLS];

    // initialize the array
    cout << "Initialize the grid:\n";
    initGrid(fin, grid, rows, cols);
    cout << "The contents of initialized grid are:\n";
    showGrid(grid, rows, cols);
    return 0;
}

void initGrid(ifstream &fin, int grid[][MAXCOLS], int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            fin >> grid[i][j];
        }
    }
};

void showGrid(int grid[][MAXCOLS], int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cout << " " << fixed << setw(6) << grid[i][j];
        }
        cout << endl;
    }
};
