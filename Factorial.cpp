/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\t\t***** Program to find factorial of any number *****\n\n";
    
    int num, fact = 1;
    
    cout<<"Enter the number for which you wish to calculate the factorial:\n";
    cin>>num;
    
    for (int i=1; i<=num; i++)
    {
        fact = fact * i;
    }
    
    cout<<"Factorial of "<<num<<" is: "<<fact;

    return 0;
}