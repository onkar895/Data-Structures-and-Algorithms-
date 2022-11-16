/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int Total(int arr[])
{
    int result = 0;
    for(int i =0; i<5; i++)
   {
    result = result + arr[i];
   }
    return result;
   
}

int main()
{
   int arr[5];
   
   cout<<"Enter the elements:\n";
   
   for(int i =0; i<5; i++)
   {
   cin>>arr[i];
   }
   
   cout<<"The sum of the following numbers is: "<<Total(arr);
   
   return 0;
}
