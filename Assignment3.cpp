/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main()
{
    int ch;
    cout<<"Menu Driven Program\n";
    
    cout<<"Plz enter your choice:"<<"\n1.Coffee\n"<<"2.Tea\n";
    cin>>ch;
    
    if (ch == 1)
    {
        cout<<"***** Plz Enjoy your Coffee *****\n";
    }
    else
    {
        cout<<"***** Plz Enjoy your Tea *****";
    }

    return 0;
}
