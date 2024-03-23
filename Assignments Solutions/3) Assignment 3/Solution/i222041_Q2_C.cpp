#include<iostream>
#include "Date.h"
#include<sstream>
using namespace std;
//``````````````````````````````````````````````````````````````````````````MAIN```````````````````````````````````````````````````````````
int main()
{
    cout << "\033[1;33m";
    cout << "\t\t\t\t\t_____________________" << endl;
    cout << "\t\t\t\t\t| DATE BY TASHFEEN |" << endl;
    cout << "\t\t\t\t\t|__________________|" << endl;
    cout << endl;
    int year, month, day;
    cout << "Enter year for d1: ";
    cin >> year;
    cout << "Enter month for d1: ";
    cin >> month;
    cout << "Enter day for d1: ";
    cin >> day;
    Date d1(year, month, day);
   // Date d1(2003, 11, 8);
    cout << "Enter year for  d2: ";
    cin >> year;
    cout << "Enter month for  d2: ";
    cin >> month;
    cout << "Enter day for  d2: ";
    cin >> day;
    Date d2(year, month, day);
    // Date d1(2004,6,16);
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << d1;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << d2;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t_____________________" << endl;
    cout << "\t\t\t\t\t|d1 and d2 are equal|" << endl;
    cout << "\t\t\t\t\t|___________________|" << endl;
    d2 = d1;
    cout << d2;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t____________________" << endl;
    cout << "\t\t\t\t\t|Adding 1 day in d1|" << endl;
    cout << "\t\t\t\t\t|__________________|" << endl;
    d2 = d1 + 1;
    cout << d2;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t____________________________" << endl;
    cout << "\t\t\t\t\t|Subtracting 4 days from d1|" << endl;
    cout << "\t\t\t\t\t|__________________________|" << endl;
    d2 = d1 - 4;
    cout << d2;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t___________________" << endl;
    cout << "\t\t\t\t\t|Adding d1 and d2 |" << endl;
    cout << "\t\t\t\t\t|_________________|" << endl;
    Date d3;
    d3 = d1 + d2;
    cout << d3;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t________________________" << endl;
    cout << "\t\t\t\t\t|Subtracting d1 and d2 |" << endl;
    cout << "\t\t\t\t\t|______________________|" << endl;
    d3 = d1 - d2;
    cout << d3;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 > d2 |" << endl;
    cout << "\t\t\t\t\t|________|" << endl;
    bool a = d1 > d2;
    if (a == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 >= d2 |" << endl;
    cout << "\t\t\t\t\t|_________|" << endl;
    bool b = d1 >= d2;
    if (b == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 < d2 |" << endl;
    cout << "\t\t\t\t\t|________|" << endl;
    bool c = d1 < d2;
    if (c == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 <= d2 |" << endl;
    cout << "\t\t\t\t\t|_________|" << endl;
    bool d = d1 <= d2;
    if (d == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 != d2 |" << endl;
    cout << "\t\t\t\t\t|_________|" << endl;
    bool e = d1 != d2;
    if (e == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t__________" << endl;
    cout << "\t\t\t\t\t|d1 == d2 |" << endl;
    cout << "\t\t\t\t\t|_________|" << endl;
    bool f = d1 == d2;
    if (f == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t\t\t____________" << endl;
    cout << "\t\t\t\t\t|Leap Year |" << endl;
    cout << "\t\t\t\t\t|__________|" << endl;
    bool z = d1.isLeapYear();
    bool y = d2.isLeapYear();
    if (z == 1 || y == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "\t\t\t____________________________________________" << endl;
    cout << "\t\t\t|Converting the integer values into string |" << endl;
    cout << "\t\t\t|__________________________________________|" << endl;
    string s = d1.toString();
    string j = d2.toString();
    cout << "Date in string representation: " << s << endl;
    cout << "Date in string representation: " << j << endl;
}