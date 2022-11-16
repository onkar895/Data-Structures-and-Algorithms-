/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\t\t\t ***** Program to Multiply 'n' natural numbers *****\n\n";
    int num, add = 1;
    
    cout<<"Enter the number\n";
    cin>>num;
    
    for (int i=1; i<=num; i++)
    {
        add = add * i;
    }
    
    cout<<"Multiplication of 1st "<<num<<" natural numbers is:"<<add;

    return 0;
}
