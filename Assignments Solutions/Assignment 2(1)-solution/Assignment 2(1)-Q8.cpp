//i222041
//Tashfeen Abbasi
//BS_DS_D



#include <iostream>

using namespace std;

void pattern(int s,char n)
{
    if(s==0)
    return;
    cout<<n;
    pattern(s-1,n);
}
int global=0;
void PrintPattern(int start, int end)
{
    if(end==0)
    return;
    else
    {
        pattern(start,' ');
        cout<<'*';
        
        pattern(end-1,' ');
        
        pattern(end-1,' ');
        cout<<"*";
        cout<<endl;
       
        PrintPattern(start+1,end-1);
        
        pattern(start,' ');
          cout<<"*";
         pattern(end-1,' ');
         pattern(end-1,' ');
         cout<<"*";
        cout<<endl;
        
    }
}
int main()
{
     PrintPattern(1,3);
}