/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int start, int end)
{
    int pivot = arr[end];
    int i = (start-1);
    int j;
    
     for (j = start; j < end; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
            i++;
            swap(arr,i,j);
            return i;
    
}

void Quicksort(int arr[],int start, int end)
{
    if (start<end)
    {
        int k = partition(arr,start,end);
        
        Quicksort(arr,start,k-1);
        Quicksort(arr,k+1,end);
    }
}



int main()
{
   int i,j,num,n;
   
   cout<<"Enter the size of an array: ";
   cin>>num;
   
   int arr[num];
   
   cout<<"Enter the elements for sorting: ";
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    
    cout<<"After Sorting the elements: "; 
    Quicksort(arr,0,num-1);
    for (i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
