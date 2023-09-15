#include <iostream>
#include <string>
using namespace std;

int countSubstrs(string Input_String, int starting, int index, int size);

int main()
{
    string InputString = "abcab";
    int Size = InputString.size(); 
    int Counter = 0;
    for (int i = 0; i < Size; i++)
    {
        for (int j = i; j < Size; j++)
        {
            if (InputString[i] == InputString[j]) // Check if start and end characters are the same.
            {
                Counter += countSubstrs(InputString, i, j, Size);
            }
        }
    }
    cout << Counter << endl;

    return 0;
}


int countSubstrs(string Input_String, int starting, int index, int size) // Recursive function that counts substrings starting and ending with same character.
{
    if (starting == index) // Base case of the recursion.
    {
        return 1;
    }
    if (starting > index) // Invalid case of the recursion.
    {
        return 0;
    }

    int Counter = countSubstrs(Input_String, starting + 1, index, size) + countSubstrs(Input_String, starting, index - 1, size) - countSubstrs(Input_String, starting + 1, index - 1, size);
    if (Input_String[starting] == Input_String[index]) // Check if start and end character are the same.
    {
        Counter++;
    }
    return Counter;
}