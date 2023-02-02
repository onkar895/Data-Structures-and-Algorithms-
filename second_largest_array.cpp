/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

int main()
{
    int i,j,max,n;
    cout<<"enter the size of an array: ";
    cin>>n;
    
    int arr[n];
    cout<<"size of an array is: "<<n<<endl;
    
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {
            max = arr[i];
            arr[i] = arr[j];
            arr[j] = max;
           }
        }
    }
    
   cout<<"Largest element in the array is: "<<max;
   cout<<"\n";
   cout<<"Second largest element in the array is: "<<arr[n-2];

    return 0;
}