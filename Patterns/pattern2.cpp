/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 

int main()
{

  for(int i = 1; i <= 5; i++)
  {
    for(int j = 1; j <= 5 - i; j++)
    {
      cout << "   ";
   
    }
    for (int k = 1; k <= i; k++)
    {
    cout<<" * ";
    }
    cout<<"\n";
  }
     
  return 0;
}