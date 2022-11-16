/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    for (i = 0; i < 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            cout<<"*";
        }
            cout<<"\n";
        
        for(k = 0; k <= i; k++)
        {
            cout<<" ";
        }
        
    }
    return 0;
}
