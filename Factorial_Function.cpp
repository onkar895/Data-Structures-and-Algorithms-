/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int Factorial(int n)
{
    int i,fact = 1;
    
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    
    return fact;
    
}

int main()
{
    int num;
    
    cout<<"Enter the number which you want to calculate the factorial: ";
    cin>>num;
    
    int Result = Factorial(num);
    
    cout<<"factorial of " <<num<< " is " <<Result;
    
    
}
