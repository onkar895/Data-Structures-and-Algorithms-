/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i, j, R, C;

    cout<<"enter the number of rows and columns\n";
    cin>>R>>C;

    // For Row
    for(i=1; i<=R; i++)
    {
        // For Column
        for(j=1; j<=C; j++)
        {
            if(i==1 || i==R || j==1 || j==C)
            {
                // Print star for 1st and last row and column
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }

        cout<<"\n";
    }

    return 0;
}