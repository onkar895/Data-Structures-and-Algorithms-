/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int arr[10],num;
    
    cout<<"Enter the number of Fibonacci Terms required:\n";
    cin>>num;
    
    arr[0] = 0;
    arr[1] = 1;

    int Result;
    
    cout<<"Fibonacci Series of "<<num<<" numbers: ";
    
    // Here we are printing 0th and 1st terms
     cout << arr[0] << ", " << arr[1] << ", ";
    
    
    for(int i = 2; i < num; i++){
        Result = arr[0] + arr[1];
        arr[0] = arr[1];
        arr[1] = Result;
        
        cout << Result << ", ";
    }

    return 0;
}
