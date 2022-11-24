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
    
    cout<<"Enter the size of an array\n";
    cin>>num;
    
    int arr[num];
    
    cout<<"Enter the elements for sorting\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    for(i=1;i<num;i++)
    {
        int key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1]=key;
    }
    
    cout<<"Sorted elements are: ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
