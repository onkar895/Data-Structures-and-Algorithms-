/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    
    cout<<"Enter the 1st Matrix\n";
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the 2nd Matrix\n";
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    
    cout<<"The sum of 1st and 2nd Matrix is:\n";
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
       
        cout<<"\n";
    }
    
    
    

    return 0;
}
