/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,num,num1;
    
    cout<<"Enter the size of an array"<<endl;
    cin>>num;
    
    int arr[num];
    
    cout<<"Enter the elements of an array\n";
    
    for (i = 0; i<num; i++)
    {
        cout <<"arr [" << i << "] = "; 
        cin>>arr[i];
    }
     
    cout<<"Enter the element which you want to search for:\n";
    cin>>num1;
    
    int start = 0, end = num-1;
    
    while(start<=end)
    {
    int mid = start + end / 2;
    
    if (arr[mid] == num1)
    {
        cout<<"Element "<<num1<<" Found in the given array at index "<<mid;
        break;
    }
    
    else if (arr[mid] > num1)
    {
        end = mid - 1;
    }
    
    else if (arr[mid] < num1) 
    {
        start = mid + 1;
    }
    }

    return 0;
}

