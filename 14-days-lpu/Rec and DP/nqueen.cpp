#include <bits/stdc++.h>
using namespace std;
const int N = 20;

int grid[N][N];
int n;

void print_grid()
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << (grid[i][j] ? "Q" : ".");
        }
        cout<<endl;
    }
    cout<<endl;
}

bool safe(int row, int col)
{
    int rrow = row, ccol = col;
    while (rrow>=0) // same column
    {
        if(grid[rrow][ccol]) return false;
        rrow--;
    }
//  right diagonal
    rrow = row;ccol = col;
    while(rrow>=0 && ccol>=0){
        if(grid[rrow][ccol]) return false;
        rrow--;ccol--;
    }
    // right diagonal
    rrow = row;ccol = col;
    while(rrow>=0 && ccol<n){
        if(grid[rrow][ccol]) return false;
        rrow--;ccol++;
    }
    return true;
}

void nqueen(int row)
{
    // cout<<row<<" "<endl;
    if (row == n)
    {
        // cout<<"End"<<endl;
        print_grid();
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (safe(row, col))
        {
            grid[row][col] = 1;
            nqueen(row + 1);
            grid[row][col] = 0; // if it not correct then back tracking
        }
    }
    return;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> n;
    nqueen(0);
}