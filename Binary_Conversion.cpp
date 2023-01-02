/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num,d;
    cout<<"Enter the number to check if it's Binary or Not: ";
    cin>>num;
    
    while(num>=0)
    {
        d = num%10;
        if(d!=0 && d!=1)
        {
            cout<<"The given number is not Binary";
            break;
        }
        num = num/10;
        if(num==0)
        {
        cout<<"The given number is Binary";
        break;
        }
       
    }
    
    return 0;
}
