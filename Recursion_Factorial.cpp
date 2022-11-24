/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fact(int n)
{
    if (n>=1)
    {
        return n * fact(n-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cout<<"Enter the number to calculate the factorial: ";
    cin>>num;
    
    cout<<"The sum of "<<num<<" natural numbers is: "<<fact(num);
    return 0;
}
