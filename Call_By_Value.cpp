/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// CALL BY VALUE

#include <iostream>

using namespace std;

void swap(int x, int y)
{
    // Local Variables
    int temp = x;
    x = y;
    y = temp;
    
    cout<<"x:"<<x<<" y:"<<y;
}

int main()
{
    cout<<"Before Swapping: ";
    int a=10,b=20;   // Global Variables
    cout<<"a:"<<a<<" b:"<<b;
    
    cout<<"\nAfter Swapping: ";
    swap(a,b);       // Pass by value
    cout<<" a:"<<a<<" b:"<<b;

    return 0;
}
