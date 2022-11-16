#include<iostream>
using namespace std;
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
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>num1;
    for(i=0; i<num; i++)
    {
        if(arr[i]==num1)
        {
            cout<<"The element "<<num1<<" is present at index "<<arr[i-1];
            return 0;
        }
        
    }
        if (i == num)
        {
            cout<<"The element "<<num1<<" is not present in the array";
        }
         
    return 0;
}