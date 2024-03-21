#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        int perRow[9][9] = {0};
        int perCol[9][9] = {0};
        int perBox[9][9] = {0};
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    int num = board[i][j] - '0';
                    int k = (i / 3) * 3 + (j / 3);
                    if (perRow[i][num - 1]++ || perCol[j][num - 1]++ || perBox[k][num - 1]++)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
