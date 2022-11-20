/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

int Linear_Search(int arr[], int num1, int num)
{
    int i;
    for(i=0; i<num; i++)
    {
        if(arr[i]==num1)
        {
            cout<<"The element "<<num1<<" is present at index "<<i;
            break;
        }
        
    }
        if (i == num)
        {
            cout<<"The element "<<num1<<" is not present in the array";
        }
        
        return 0 ;
         
}

int main()
{
    int num,num1,i;
    cout<<"Enter the size of an array"<<endl;
    cin>>num;
    int arr[num];
    
    cout<<"Enter the elements of an array"<<endl;
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Elements are:";
    for (i = 0; i<num; i++)
    {
        cout<<arr[i]<<" ";
       
    }
     cout<<"\n";
    
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>num1;
    
    Linear_Search(arr,num1,num);
    
    return 0;
}
