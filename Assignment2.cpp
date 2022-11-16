/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

int main() {
    
    std::cout << "Program to Swap Two Numbers!\n\n";
    
     
    int a = 10, b = 20;
    int Result;
    
    std::cout<<"The Numbers Before Swapping :\n"<<"a=" << a <<"\nb=" << b;
    
    Result = a;
    a = b;
    b = Result;
    
   std::cout<<"\nThe Numbers After Swapping :\n"<<"a=" << a <<"\nb=" << b;
    

    return 0;
}