/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i,j,n,m;
   
   cout<<"enter the integers\n";
   cin>>n>>m;
   
   for (i = 1; i<=n; i++)
   {
       for (j = 1; j<=m; j++)
       {
           cout<<"*";
       }
       cout<<"\n";
   }

    return 0;
}
