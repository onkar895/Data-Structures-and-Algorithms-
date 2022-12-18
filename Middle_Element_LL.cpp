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
    node *next;
};

node *head = NULL;

void getmiddle(node *head)
{
    node *mid = head;
    node *Nmid = head;

    while (Nmid != NULL && Nmid->next != NULL)
    {
       mid = mid->next;
       Nmid = Nmid->next->next;
    }

cout<<"The Middle Element in the given linked list is: "<<mid->data;
}


int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;
    node *fifth = new node;

    head->data = 5;     head->next = second;
    second->data = 6;   second->next = third;
    third->data = 7;    third->next = fourth;
    fourth->data = 8;   fourth->next = fifth;
    fifth->data = 9;    fifth->next = NULL;
    
    cout<<"The given linked list elements are: ";
    cout<<head->data<<" ";
    cout<<second->data<<" ";
    cout<<third->data<<" ";
    cout<<fourth->data<<" ";
    cout<<fifth->data<<" "<<endl;
    
    getmiddle(head);

    return 0;
}
