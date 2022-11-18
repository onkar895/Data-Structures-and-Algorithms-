/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int num, a = 0, b = 1;
    
    cout<<"Enter the number\n";
    cin>>num;

    int Result;
    
    cout<<"Fibonacci Series of "<<num<<" numbers: ";
    
    // Here we are printing 0th and 1st terms
     cout << a << ", " << b << ", ";
    
    
    for(int i = 2; i < num; i++){
        Result = a + b;
        a = b;
        b = Result;
        
        cout << Result << ", ";
    }

    return 0;
}
