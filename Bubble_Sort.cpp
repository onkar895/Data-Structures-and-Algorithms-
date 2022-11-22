/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int i,j,num,n;
   int temp;
   
   cout<<"Enter the size of an array: ";
   cin>>num;
   
   int arr[num];
   
   cout<<"Enter the elements\n";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
   
   for (i = 0; i < num - 1; i++)
   {
        for (j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
         
   }
   
   cout<<"Sorting Elements are: ";
   
   for (i = 0; i < num; i++)
   {
       cout<<arr[i]<<" ";
   }
  
    return 0;
}
