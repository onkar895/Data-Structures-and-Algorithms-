/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sum(int n)
{
    if (n!=0)
    {
        return n + sum(n-1);
    }
    else
    {
        return n;
    }
}

int main()
{
    int num;
    cout<<"Enter the number to add: ";
    cin>>num;
    
    cout<<"The sum of "<<num<<" natural numbers is: "<<sum(num);
    return 0;
}
