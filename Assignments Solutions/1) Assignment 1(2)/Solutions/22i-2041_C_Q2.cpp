/*
Tashfeen Abbasi
22i-2041
Assignment 1
OOP_C
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int det_last_col(int*** cube, int i, int size)
{
    if (size == 2)
    {
        int determinant = ((cube[i][0][0] * cube[i][1][1]) - (cube[i][1][0] * cube[i][0][1]));
        return determinant;
    }
    else if (size == 3)
    {
        int det = (((cube[i][0][2]) * ((cube[i][1][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][1][1]))))
            - (cube[i][1][2] * ((cube[i][0][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][0][1])))
            + (cube[i][2][2] * ((cube[i][0][0] * cube[i][1][1]) - (cube[i][1][0] * cube[i][0][1])));
        return det;
    }
    else if (size == 4)
    {
        int det = ((cube[i][0][3] * (cube[i][1][2] * ((cube[i][3][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][3][1]))))
            - (cube[i][1][3] * (cube[i][0][2] * ((cube[i][3][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][3][1]))))
            + (cube[i][2][3] * (cube[i][0][2] * ((cube[i][3][0] * cube[i][1][1]) - (cube[i][1][0] * cube[i][3][1]))))
            - (cube[i][3][3] * (cube[i][0][2] * ((cube[i][2][0] * cube[i][1][1]) - (cube[i][1][0] * cube[i][2][1])))));

        return det;
    }
    else if (size == 5)
    {
        int det = ((cube[i][0][4] * (cube[i][1][3] * (cube[i][2][2] * ((cube[i][4][0] * cube[i][3][1]) - (cube[i][3][0] * cube[i][4][1])))))
            - (cube[i][1][4] * (cube[i][0][3] * (cube[i][2][2] * ((cube[i][4][0] * cube[i][3][1]) - (cube[i][3][0] * cube[i][4][1])))))
            + (cube[i][2][4] * (cube[i][0][3] * (cube[i][1][2] * ((cube[i][4][0] * cube[i][3][1]) - (cube[i][3][0] * cube[i][4][1])))))
            - (cube[i][3][4] * (cube[i][0][3] * (cube[i][1][2] * ((cube[i][4][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][4][1])))))
            + (cube[i][4][4] * (cube[i][0][3] * (cube[i][1][2] * ((cube[i][3][0] * cube[i][2][1]) - (cube[i][2][0] * cube[i][3][1]))))));
        return det;
    }
}
bool singular(int*** cube, int i, int size)
{
    int determinant = det_last_col(cube, i, size);
    return determinant == 0;
}

int main()
{
    cout << "\033[1;32m";
    cout << "\t\t\t\t\t\033[1;33m_______________" << endl;
    cout << "\t\t\t\t\t\033[1;33m|RUBIK'S CUBE |" << endl;
    cout << "\t\t\t\t\t\033[1;33m|_____________|" << endl << endl;

    int s = 0;
    cout << "Enter the size of the Rubik's Cube (2-5): ";
    cin >> s;
    if (s < 2 || s > 5)
    {
        cout << "Invalid size! Size must be between 2 and 5. Please enter again." << endl;
        cin >> s;
    }

    cout << "\t\t\t\033[1;33m_______________________________________________" << endl;
    cout << "\t\t\t\033[1;33m|FINDING DETERMINANT OF SIDES OF RUBIK'S CUBE |" << endl;
    cout << "\t\t\t\033[1;33m|_____________________________________________|" << endl << endl;

    // 3D Array Allocation
    int*** cube = new int** [6];
    for (int i = 0; i < 6; i++)
    {
        cube[i] = new int* [s];
        for (int j = 0; j < s; j++)
        {
            cube[i][j] = new int[s];
        }
    }
    //Visual Studio Runs this srand(time(0)) but on online compiler and Dev C++ it's showing an error. 
    //srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < s; j++)
        {
            for (int k = 0; k < s; k++)
            {
                cube[i][j][k] = rand() % 99 + 1;
            }
        }
    }

    // Display
    cout << "_____________________________________________________________________" << endl;
    for (int i = 0; i < 6; i++) // sides loop
    {
        cout << "Side " << i + 1 << ": " << endl;
        for (int j = 0; j < s; j++)
        {
            for (int k = 0; k < s; k++)
            {
                if (cube[i][j][k] < 10)
                {
                    cout << "0";
                }
                cout << cube[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "_____________________________________________________________________" << endl;

    // Top side ko update 
    cout << "Enter the values for the top side: " << endl;
    for (int j = 0; j < s; j++)
    {
        for (int k = 0; k < s; k++)
        {
            cin >> cube[0][j][k];
        }
        cout << endl;
    }
    cout << "Updated Top side (Side 1): " << endl;
    for (int j = 0; j < s; j++)
    {
        for (int k = 0; k < s; k++)
        {
            if (cube[0][j][k] < 10)
            {
                cout << "0";
            }
            cout << cube[0][j][k] << " ";
        }
        cout << endl;
    }
    cout << "_____________________________________________________________________" << endl;
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cout << "Determinant of side " << i + 1 << ":  ";
        int determinant = det_last_col(cube, i, s);
        cout << determinant << endl;
        sum += determinant;
        cout << "Sum of the side " << i + 1 << ":      " << sum << endl << endl;
    }
    cout << "_____________________________________________________________________" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Side " << i + 1 << " is:  ";
        if (singular(cube, i, s))
        {
            cout << "Singular." << endl;
        }
        else
        {
            cout << "Not Singular." << endl;
        }

    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < s; j++)
        {
            delete[] cube[i][j];
        }
        delete[] cube[i];
    }
    delete[] cube;
    cube = NULL;
    return 0;
}