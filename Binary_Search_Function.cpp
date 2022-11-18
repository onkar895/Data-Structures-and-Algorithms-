#include <iostream>

using namespace std;

int Binary_search(int arr[], int element, int n) 
{
    int start = 0,end = n-1, mid;

    while (start <= end) 
    {
        mid = (start + end) / 2;

        if (arr[mid] == element) 
        {
            cout << "The Element " << element << " is Found at index : " <<mid<<"\n";
            break;
        } 
        else if (arr[mid] > element)
        {
            end = mid - 1;
           
        }
        else
        {
             start = mid + 1;
        }
    }

    if (start > end)
    {
        cout << "Element" << element << " is Not Found \n";
    }

    return 0;
}

int main() 
{
    int arr[10], i, element, n;
    
    n = sizeof(arr) / sizeof(int);

    cout << "Enter the elements for Searching:\n ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "HERE ARE THE ELEMENTS: ";
    for (i = 0; i < n; i++) 
    {
        cout << "\t" << arr[i];
    }

    cout << "\nEnter Element to Search : ";
    cin>>element;


    Binary_search(arr, element,n);
    return 0;
}