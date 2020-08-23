#include <bits/stdc++.h>
using namespace std;
// 3 0 6 5 0 8 4 0 0  
// 5 2 0 0 0 0 0 0 0  
// 0 8 7 0 0 0 0 3 1  
// 0 0 3 0 1 0 0 8 0  
// 9 0 0 8 6 3 0 0 5  
// 0 5 0 0 9 0 6 0 0  
// 1 3 0 0 0 0 2 5 0  
// 0 0 0 0 0 0 0 7 4  
// 0 0 5 2 0 6 3 0 0
const int N = 9;
int grid[N][N];

void print_grid()
{
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    exit(0);
}
bool safe(int row, int col, int dig)
{
    //  row check
    for (size_t i = 0; i < N; i++)
    {
        if (grid[row][i] == dig)
            return false;
    }
    // col check
    for (size_t i = 0; i < N; i++)
    {
        if (grid[i][col] == dig)
            return false;
    }
    // block check
    int stx = (row / 3) * 3;
    int sty = (col / 3) * 3;

    for (size_t i = stx; i < stx + 3; i++)
    {
        for (size_t j = sty; j < sty + 3; j++)
        {
            if (grid[i][j] == dig)
                return false;
        }
    }
    return true;
}
void sudoku(int row, int col)
{
    if (row == N)
    {
        print_grid();
        return;
    }
    if (grid[row][col] == 0)
    {
        for (int dig = 1; dig <= 9; dig++)
        {
            if (safe(row, col, dig))
            {
                grid[row][col] = dig;
                if (col + 1 == N)
                    sudoku(row + 1, 0);
                else
                    sudoku(row, col + 1);
                grid[row][col] = 0;
            }

        }
    }
    else
    {
        if (col + 1 == N)
            sudoku(row + 1, 0);
        else
            sudoku(row , col + 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            cin >> grid[i][j];
        }
    }
    sudoku(0, 0);
}