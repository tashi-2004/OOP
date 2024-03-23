/*
Tashfeen Abbasi
i22-2041
Assignment 1
OOP-C
*/
#include <iostream>
using namespace std;
void rows(char ch, int spaces, int character)
{
    if (spaces > 0)
    {
        cout << " ";
        rows(ch, spaces - 1, character);
    }
    else if (character > 0)
    {
        cout << ch;
        rows(ch, spaces, character - 1);
    }
    else
    {
        cout << endl;
    }
}

void pattern(char ch, int size, int p, int i)
{
    if (i < p + 1)
    {
        rows(ch, p - i, i);
        pattern(ch, size, p, i + 1);
        rows(ch, p - i, i);
    }
}
int main()
{
    char ch = ' ';
    cout << "Enter the character you want to print: ";
    cin >> ch;
    int size;
    cout << "Enter the size which you want to print: ";
    cin >> size;
    int p = size / 2;
    pattern(ch, size, p, 0);
    return 0;
}
