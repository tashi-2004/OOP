//i222041
//Tashfeen Abbasi
//BS_DS_D





#include<iostream>
using namespace std;
int global=4;
void pattern1(int value,char ch)
{
    if(value==5)
    {
        
       return;
    }
    if(value==4)
    cout<<"*";
    else
    cout<<ch;
   
    pattern1(value+1,ch);
    
    
}
void pattern(int value,char ch)
{
    if(value==0)
    return;
    cout<<ch;
    pattern(value-1,ch);
}
void PrintPattern(int value, char ch)
{
    if(value==0)
    return;
    else
    {
        pattern(value-1,' ');
        cout<<"*";
       
        pattern1(global+1,' ');
        
        global-=1;
         cout<<endl;
        PrintPattern(value-1,ch);
        cout<<"*";
        
    }
}
int main()
{
     PrintPattern(5,'*');
}