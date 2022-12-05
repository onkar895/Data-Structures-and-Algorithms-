#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node *next;
};

node *head = NULL;

void insertatbeg(int val)
{
    node *p = new node;
    p->data = val;
    p->next = NULL;
    
    if(head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}

void insertatend(int val)
{
    node *p = new node;
    p->data = val;
    p->next = NULL;
    
    node*temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next = p; 
    
}

void insertatposition(int val, int pos)
{
    node *p = new node;
    p->data = val;
    p->next = NULL;
    
    node *temp = head;
    
    int i = 1;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    
    p->next = temp->next;
    temp->next = p;
}

void traverse()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



int main()
{
    insertatbeg(23);
    insertatbeg(29);
    insertatbeg(60);
    
    insertatend(29);
    insertatend(59);
    insertatend(93);
    
    insertatposition(62,4);
    
    traverse();

    return 0;
}
