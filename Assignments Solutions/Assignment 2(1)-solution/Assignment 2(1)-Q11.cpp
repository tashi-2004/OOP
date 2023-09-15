#include<iostream>
using namespace std;

bool isSafe(char board[][9], int row, int col)
{
   
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q') 
        {
            return false;
        }
    }

   
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

   
    for (int i = row, j = col; j >= 0 && i < 9; i++, j--)
    {
        if (board[i][j] == 'Q') 
        {
            return false;
        }
    }

   
    return true;
}

void printBoard(char board[][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool nQueens(char board[][9], int col)
{
   
    if (col == 9)
    {
        printBoard(board);
        cin.get();
        
        return true;
    }

    bool res = false;

    for (int i = 0; i < 9; i++)
    {
        if (isSafe(board, i, col)) 
        {
            
            board[i][col] = 'Q';
            res = nQueens(board, col + 1) || res;
            board[i][col] = '-';
        }
    }

    return res;
}

int main()
{
    
    char board[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            board[i][j] = '-';
        }
    }

    nQueens(board, 0);

    return 0;
}
