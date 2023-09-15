#include<iostream>
using namespace std;
bool check_win(char** board, int height, int width)
{
    int h = height - 1;
    int c = width - 1;
    int counter = 0; bool flag = false; int counterr1 = 0, counterc1 = 0, counterr2 = 0, counterc2 = 0, counterr3 = 0, counterc3 = 0, counterr4 = 0, counterc4 = 0, counterr5 = 0, counterc5 = 0;
    //lets chec horizontal if it connect four
    for (int i = h; i >= 0; i--)
    {
        ///horizontal
        for (int j = 0; j < width - 3; j++)
        {
            if (board[i][j] == 'X' && board[i][j + 1] == 'X' && board[i][j + 2] == 'X' && board[i][j + 3] == 'X')
            {
                flag = true;
            }
            else if (board[i][j] == '+' && board[i][j + 1] == '+' && board[i][j + 2] == '+' && board[i][j + 3] == '+')
            {
                flag = true;
            }


        }

        //now i will check for the coloumn
    }

    ///now lets check it vertically

    for (int i = h; i > 2; i--)
    {
        //verticaly
        for (int j = 0; j < width; j++)
        {
            if (board[i][j] == 'X' && board[i - 1][j] == 'X' && board[i - 2][j] == 'X' && board[i - 3][j] == 'X')
            {
                flag = true;
            }
            else if (board[i][j] == '+' && board[i - 1][j] == '+' && board[i - 2][j] == '+' && board[i - 3][j] == '+')
            {
                flag = true;
            }


        }

        //now i will check for the coloumn
    }


    ///now lets check it diagnally in c++




    ///////now lets check vertically


    for (int i = h; i > 2; i--)
    {
        //verticaly
        for (int j = 0; j < width; j++)
        {
            if (board[i][j] == 'X' && board[i - 1][j] == 'X' && board[i - 2][j] == 'X' && board[i - 3][j] == 'X')
            {
                flag = true;
            }
            else if (board[i][j] == '+' && board[i - 1][j] == '+' && board[i - 2][j] == '+' && board[i - 3][j] == '+')
            {
                flag = true;
            }


        }

        //now i will check for the coloumn
    }



    return flag;

}
void display(int width, int height, char** board, int choice_p1, char turn)
{


    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << "  " << board[i][j] << "  ";
        }
        cout << endl;


    }

}
void selection(char** board, int height, int width, int choice, char turn)
{
    int h = height - 1;

    do
    {
        if (board[h][choice] != 'X' && board[h][choice] != '+')
        {
            board[h][choice] = turn;
            turn = true;
        }
        else
            h--;
    } while (turn != true);


}
void playConnect4(int width, int  height, char** board)
{
    cout << "\t\tCONNECT FOUR GAME" << endl;
    int choice = 0;
    int choice_p2 = 0;
    char turn = 'X';
    display(width, height, board, choice, turn);
    int count = 0;
    bool flag = false;
    int h = height - 1;
    cout << "PLAYER ONE REPRESENTATION 'X' ||  PLAYER TWO REPREENTATION '+'" << endl;

    while (true)
    {
    l3:
        cout << "PLAYER ONE ENTER YOUR CHOICE";
        cin >> choice;
        if (choice < 0 || choice>6)
            goto l3;
        turn = 'X';
        selection(board, height, width, choice, turn);
        display(width, height, board, choice, turn);

        if ((check_win(board, height, width)) == true)
        {
            cout << "player one successfully win" << endl;
            break;
        }



    l2:
        cout << "PLAYER TWO ENTER YOUR CHOICE";
        cin >> choice;
        if (choice < 0 || choice>7)
            goto l2;
        turn = '+';
        selection(board, height, width, choice, turn);
        display(width, height, board, choice, turn);


        //lets check player win choicess


        if ((check_win(board, height, width)) == true)
        {
            cout << "player two successfully win" << endl;
            break;
        }

    }

}

int main()
{

    int width = 7;
    int height = 6;
    char** board = new char* [height];
    for (int i = 0; i < height; i++)
    {
        board[i] = new char[width];
        for (int j = 0; j < width; j++)
        {
            board[i][j] = '_';
        }
    }

    playConnect4(width, height, board);




}

