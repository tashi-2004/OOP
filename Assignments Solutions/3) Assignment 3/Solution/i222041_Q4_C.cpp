#include <iostream>
#include"Byte.h"
using namespace std;
int main() 
{
    BinaryStore b1;
    b1 += "0011";
    b1.Add("0011", Byte("00000010"));
    cout << b1;

    b1 += "0110";
    b1.Add("0110", Byte("00000110"));
    b1 += "1010";
    Byte nb = b1.Get("0011") + b1.Get("0110");
    b1.Add("1010", nb);
    Byte nb2 = b1.Get("1010");
    bool r = nb2 == b1.Get("1010");
    cout << endl;
    cout << "Equal = " << r << endl;

    Byte nb3 = b1.Get("0011") || b1.Get("1010");
    Byte nb4("00001100");
    Byte nb5 = nb3 && nb4;
    b1 += "1011";
    b1.Add("1011", nb5);
    cout << b1;

    return 0;
}
