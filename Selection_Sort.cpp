#include <iostream>

using namespace std;

int main()
{
    int i,j,num,n;
    int min,temp;
    
    cout<<"Enter the size of an array\n";
    cin>>num;
    
    int arr[num];
    
    cout<<"Enter the elements for sorting\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<num;i++)
    {
        min = i;
        for(j=i+1;j<num;j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
           
        }
              temp = arr[i];
               arr[i] = arr[min];
                arr[min] = temp;
                
    }
        cout<<"Sorted array is: ";
        for(i=0;i<num;i++)
        {
            cout<<arr[i]<<" ";
        }    

    return 0;

}
