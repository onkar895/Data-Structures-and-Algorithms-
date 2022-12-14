/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node * next;
};

node *top = NULL;

void push(int val)
{
    node *p = new(nothrow) node;
    if (!p)
    {
        cout<<"Stack Overflow";
    }
    else
    {
        p->data = val;
        p->next = top;
        top = p;
    }
}

void pop ()
{
    if(top == NULL)
    {
        cout<<"Underflow";
    }
    else
    {
        node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete(temp);
    }
}

void traverse()
{
    node *temp = top;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main()
{
    push(5);
    push(6);
    traverse();
    cout<<endl;
    
    pop();
    traverse();
    cout<<endl;
   
    push(20);
    push(15);
    traverse();
    
    
    
   
    

    return 0;
}
