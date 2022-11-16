/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 

int main()
{

  int n;
  cout<<"enter the number:\n";
  cin>>n;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n - i; j++)
    {
      cout << "   ";
    }
      // (2*i-1) - for printing pattern stars such as 1,3,5,7,9
      for (int k = 1; k <= 2*i-1; k++)
      {
        cout<<" * ";
      }
    cout<<"\n";
  }
     
  return 0;
}