#include <iostream>

using namespace std;

void pattern1(char num,int d)
{
   if (d==0)
        return;
    cout<<num;
    pattern1(num, d-1);
}
int global=3;
void pattern(int s,int e,char t,char r)
{

    if(e==0 )
    return;
    else
    {
       if(s%2==1)
       {
           cout<<s;
           pattern1(r,s);
           
       }
       else
       {
           cout<<s;
           pattern1(t,s); 
       }
      pattern(s+1,e-1,t,r);
     
     if(global!=0){
      if(global%2==1)
       {
            cout<<global;
           pattern1(r,s-1);
           
       }
       else
       {
            cout<<global;
           pattern1(t,s-1); 
       }
     }
      global-=1;
    }
    
   
    
}

int main()
{
    pattern(1,4,'^','*');
   
}