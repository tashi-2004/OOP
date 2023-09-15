//i222041
//Tashfeen Abbasi
//BS_DS_D

#include <iostream>
using namespace std;

void print(int x, char y)
{
    if (x==0)
        return;
    cout<<y;
    print(x-1, y);
}
int global=0;
void PrintPattern(int x, int y)
{
    if (y==0)
        return;
    else
    {
        print(x-1,' ');
        cout<<"#";
        print(x,'.');
        print(global,'*');
        cout<<'|';
        print(global,'*');
        print(x,'.');
        cout<<"#";
        cout<<endl;
        global+=2;
        PrintPattern(x-1, y-1);
        print(x-1,' ');
        global-=2;
        cout<<"#";
        print(x,'.');
        print(global,'*');
        cout<<'|';
        print(global,'*');
        print(x,'.');
        cout<<"#";
        cout<<endl;
        
    }
}


int main(int argc, const char * argv[]) {
    PrintPattern(5, 5);
}
