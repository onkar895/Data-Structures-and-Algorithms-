/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num,i,j,temp;
    
    cout<<"Enter the size of an array"<<endl;
    cin>>num;
    int arr[num];
    
    cout<<"Enter the elements of an array"<<endl;
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"All the Prime numbers in the array are: ";
    for (i=0;i<num;i++)
    {
        temp = 0;
        for(j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
            temp = 1;
            break;
            }
        }
        if (temp == 0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
