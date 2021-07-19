#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int number, i, a;
 
    cout<<"Enter any number:";
    cin>>number;
 
    a = 0;
    i = 2;
    while(i <= number/2)
    {
        if(number%i == 0)
        {
            a=1;
            break;
        }
        i++;
    }
    if(a == 0)
        cout<<number<<" is a Prime Number"<<endl;
    else
        cout<<number<<" is Not a Prime Number"<<endl;

   return 0;
}