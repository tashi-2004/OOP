#include<iostream>
#include"Money.h"
using namespace std;
//``````````````````````````````````````````MAIN```````````````````````````````````````````````````````
int main()
{
    cout << "\033[1;36m";
    cout << "\t\t\t\t\t___________" << endl;
    cout << "\t\t\t\t\t| DOLLARS |" << endl;
    cout << "\t\t\t\t\t|_________|" << endl;
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    double amount1;
    cout << "Enter the 1st amount(m1): ";
    cin >> amount1;
    cout << endl;
    double amount2;
    cout << "Enter the 2nd amount(m2): ";
    cin >> amount2;
    cout << endl;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    Money m1(amount1);
    Money m2(amount2);
    cout << "Addition of two objects   : " << endl;
    Money m3 = m1 + m2;
    cout << m3;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Subtraction of two objects: " << endl;
    Money m4 = m1 - m2;
    cout << m4;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Addition of $5 in the 1st amount   : " << endl;
    Dollar d1(5);
    Money m5;
    m5 = m1 + d1;
    cout << m5;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Subtraction of $5 in the 1st amount : " << endl;
    Dollar d2(5);
    Money m6;
    m6 = m1 - d2;
    cout << m6;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Addition  of 5 nickels in the 1st amount : " << endl;
    Nickel n1(5);
    Money m7;
    m7 = m1 + n1;
    cout << m7;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Subtraction  of 5 nickels in the 1st amount : " << endl;
    Nickel n2(5);
    Money m8;
    m8 = m1 - n2;
    cout << m8;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Addition of 5 quarters in the 1st amount : " << endl;
    Quarter q1(5);
    Money m9;
    m9 = m1 + q1;
    cout << m9;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Subtraction of 5 quarters in the 1st amount : " << endl;
    Quarter q2(5);
    Money m10;
    m10 = m1 - q2;
    cout << m10;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Addition of 5 cents in 1st amount :" << endl;
    Cent c1(5);
    Money m11;
    m11 = m1 + c1;
    cout << m11;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Subtraction of 5 cents in 1st amount :" << endl;
    Cent c2(5);
    Money m12;
    m12 = m1 - c2;
    cout << m12;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Pre-increment of 5 cents in 1st amount: " << endl;
    Money m13 = m1;
    //int a = 5;
    //m13 = a++;
    m13++;
    cout << m13;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    cout << "Pre-decrement of 5 cents in 1st amount: " << endl;
    Money m14 = m1;
    /*int  b = 5;
    m14 = b--;*/
    m14--;
    cout << m14;
    cout << "---------------------------------------------------------------------------" << endl << endl;
    if (m1 >= m2)
    {
        cout << "m1 is greater than m2" << endl;
    }
    else
    {
        cout << "m2 is greater than m1" << endl;
    }
    cout << "---------------------------------------------------------------------------" << endl << endl;
    if (m1 <= m2)
    {
        cout << "m1 is smaller than m2" << endl;
    }
    else
    {
        cout << "m2 is smaller than m1" << endl;
    }


    cout << "---------------------------------------------------------------------------" << endl << endl;
    Quarter q;
    q = !m1;
    cout << "Maximum number of quarters in m1: " << q.get_quarter() << endl;


    cout << "---------------------------------------------------------------------------" << endl << endl;
    Nickel n;
    n = ~m1;
    cout << "Maximum number of nickels in m1: " << n.get_nickel() << endl;


    cout << "---------------------------------------------------------------------------" << endl << endl;

    Money m15;
    int f = 5;
    m15 = m1 / f;
    cout << m15;

    cout << "---------------------------------------------------------------------------" << endl << endl;
    Money m16;
    int w = 5;
    m16 = m1 * w;
    cout << m16;
    return 0;
}