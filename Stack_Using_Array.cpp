/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#define SIZE 5

int arr[SIZE];
int top = -1;

int isfull()
{
    if(top == SIZE - 1)
    {
        return 1;           // returns 1 to the push function
    }
    else
    {
        return 0;
    }
}

void push (int n)
{
    if(isfull())                 // if(1)   1 means condition true
     {
        cout<<"Stack Overflow";
    }
    else
    {
        top++;
        arr[top]=n;
    }
}

int isempty()
{
    if(top == -1)
    {
        return 1;           // returns 1 to the push function
    }
    else
    {
        return 0;
    }
}

void pop()
{
    if(isempty())
    {
        cout<<"Stack Underflow";
    }
    else
    {
        int val = arr[top];
        top--;
    }
}


void traverse()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    push(5);
    push(6);
    pop();
    pop();
   
    push(20);
    push(15);
    traverse();
    push(21);
    traverse();
    
    return 0;
}
