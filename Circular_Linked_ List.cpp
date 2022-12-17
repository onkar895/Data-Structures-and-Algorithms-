/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class node                                 // Declaring the node class
{
    public:
    int data;                              // The data member is an integer, and 
    node *next;                            // the next member is a pointer to another node (address of another node).
};

node *tail = NULL;                         // Pointer to the starting node which named as "tail" of node type which is currently holding adsress 'NULL'.
 
void insertatbeg(int val)                  // Defining Function
{
    if(tail == NULL)                       // (If it is the very first node)
    {
        node *p = new node;                 // Creation of new node 
        p->data = val;  
        p->next = p;  
        tail = p;            
    }
    else
    {
        node *p = new node;                 // Creation of new node
        p->data = val; 
        p->next = tail->next;                
        tail->next = p;                          
    }
}

void traverse()                           // For traversing the nodes
{
    node *temp=tail->next;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }   while(temp!=tail->next);
}

void insertatend(int val)
{
    node *p = new node;                     
    p->data = val;                          
    p->next = tail->next;    
    tail->next = p;
    tail = tail->next;
}

void insertatposition(int val, int pos)
{
    node *temp = tail->next; 
    node *p = new node;
    p->data = val;       
    
    int i = 1;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    
    p->next = temp->next;
    temp->next = p;
}

void deleteatbeginning()            // Delete the element at beginning
{
    if(tail->next == tail)
    {
        tail = NULL;
        delete(tail);
    }
    else
    {
        node * temp = tail->next;
        tail->next = temp->next;
        temp->next = NULL;
        delete(temp);
    }
}
 
void deleteatend()                  // Delete the element at end
{
    node *temp = tail->next;
    
    while(temp->next!=tail)
    {
        temp = temp->next;
    }
        temp->next = tail->next;
        delete(tail);
        tail = temp;
}

void deleteatposition(int pos)           // Delete the element at random position
{
    node *temp = tail->next;
    node *temp2;
    
    int i=1;
    while(i<pos)
    {
        temp2 = temp;
        temp = temp->next;
        i++;
    }
    
    temp2->next=temp->next;
    delete(temp);
}


int main()
{
    
    insertatbeg(7);
    insertatbeg(9);
    traverse();
    cout<<"\n";
    
    insertatend(16);
    traverse();
    cout<<"\n";
    
    insertatposition(35,3);
    traverse();
    cout<<"\n";
    
    insertatbeg(60);
    insertatend(34);
    traverse();
    cout<<"\n";
    
    deleteatbeginning();
    traverse();
    cout<<"\n";
    
    deleteatend();
    traverse();
    cout<<"\n";
    
    deleteatposition(3);
    traverse();
    cout<<"\n";

    
    return 0;
}
