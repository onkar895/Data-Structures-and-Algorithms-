#include <iostream>

using namespace std;

int main()
{
    int i,j,num,n;
    int max,temp;
    
    cout<<"Enter the size of an array\n";
    cin>>num;
    
    int arr[num];
    
    cout<<"Enter the elements for sorting\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
        max = 0;
        for(j=1;j<num;j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
           
        }
        
        cout<<"The maximum value in the array is: "<<arr[max];
                

    return 0;

}
