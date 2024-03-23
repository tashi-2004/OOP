#include <iostream>
#include <sstream>
#include"BigInt.h"
using namespace std;
int main()
{
    cout << "\033[1;36m";
    cout << "\t\t\t\t\t______________" << endl;
    cout << "\t\t\t\t\t|BIG INTEGER |" << endl;
    cout << "\t\t\t\t\t|____________|" << endl;
    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b1;
    cin >> b1;
    BigInt b2;
    cin >> b2;
    /*system("cls");
    system("pause");*/
    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t______________" << endl;
    cout << "\t\t\t\t\t|b1 will be  |" << endl;
    cout << "\t\t\t\t\t|____________|" << endl;
    cout << b1;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t\t______________" << endl;
    cout << "\t\t\t\t\t|b2 will be  |" << endl;
    cout << "\t\t\t\t\t|____________|" << endl;
    cout << b2;


    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b3;
    b3 = b1 + b2;
    cout << "\t\t\t\t_____________________" << endl;
    cout << "\t\t\t\t|Adding b1 and  b2  |" << endl;
    cout << "\t\t\t\t|___________________|" << endl;
    cout << b3;


    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b4;
    int add;
    cout << "Enter the value to be added: ";
    cin >> add;
    cout << endl;
    b4 = b1 + add;
    cout << "\t\t\t\t__________________________" << endl;
    cout << "\t\t\t\t|Adding b1 to the value  |" << endl;
    cout << "\t\t\t\t|________________________|" << endl;
    cout << b4;


    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b5;
    cout << "\t\t\t\t__________________________" << endl;
    cout << "\t\t\t\t|Subtracting b2 from b1  |" << endl;
    cout << "\t\t\t\t|________________________|" << endl;
    b5 = b1 - b2;
    cout << b5;



    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b6;
    int minus;
    cout << "Enter the value to be Subtract from b1: ";
    cin >> minus;
    cout << endl;
    b6 = b1 - minus;
    cout << "\t\t\t\t_______________________________" << endl;
    cout << "\t\t\t\t|Subtracting b1 to the value  |" << endl;
    cout << "\t\t\t\t|_____________________________|" << endl;
    cout << b6;



    cout << "---------------------------------------------------------------------------------------" << endl;
    BigInt b7;
    int multiply;
    cout << "Enter the value to be multiply with b1: ";
    cin >> multiply;
    cout << endl;
    b7 = b1 * multiply;


    cout << "\t\t\t\t___________________________" << endl;
    cout << "\t\t\t\t|Multiplying b1 and b2    |" << endl;
    cout << "\t\t\t\t|_________________________|" << endl;
    cout << b7;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t____________________________" << endl;
    cout << "\t\t\t\t|Adding b1 in b2 by +=     |" << endl;
    cout << "\t\t\t\t|__________________________|" << endl;
    b1 += b2;
    cout << b1;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_________________________________" << endl;
    cout << "\t\t\t\t|Subtracting b1 from b2 by -=   |" << endl;
    cout << "\t\t\t\t|_______________________________|" << endl;
    b1 -= b2;
    cout << b1;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_________________________________" << endl;
    cout << "\t\t\t\t|Multiplying b1 and  b2 by *=   |" << endl;
    cout << "\t\t\t\t|_______________________________|" << endl;
    int mul;
    cout << "Enter the value to be multiply with b1: ";
    cin >> mul;
    cout << endl;
    b1 *= mul;
    cout << b1;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 == b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 == b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 != b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 != b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 < b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 < b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }



    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 <= b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 <= b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 > b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 > b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_____________" << endl;
    cout << "\t\t\t\t| b2 >= b1  |" << endl;
    cout << "\t\t\t\t|___________|" << endl;
    if (b2 >= b1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t___________" << endl;
    cout << "\t\t\t\t| ++b2    |" << endl;
    cout << "\t\t\t\t|_________|" << endl;
    BigInt b9 = ++b2;
    cout << b9;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t___________" << endl;
    cout << "\t\t\t\t| b2++    |" << endl;
    cout << "\t\t\t\t|_________|" << endl;
    BigInt b10 = b2++;
    cout << b10;
    cout << "b2 in ++ post " << b2;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t___________" << endl;
    cout << "\t\t\t\t| b2--    |" << endl;
    cout << "\t\t\t\t|_________|" << endl;
    BigInt b12 = b2--;
    cout << b12;
    //cout << "b2 in -- post " << b2;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t___________" << endl;
    cout << "\t\t\t\t| --b2    |" << endl;
    cout << "\t\t\t\t|_________|" << endl;
    BigInt b11 = --b2;
    cout << b11;


    cout << "---------------------------------------------------------------------------------------" << endl;
    cout << "\t\t\t\t_________________________________" << endl;
    cout << "\t\t\t\t| Operator String for b1 and b2 |" << endl;
    cout << "\t\t\t\t|_______________________________|" << endl;
    b1.operator string();
    cout << b1;
}