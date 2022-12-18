/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

class node{
	public:
	int data;
	node *next;
};

node *front=NULL;
node *rear=NULL;

void traverse()
{
	node *temp=front;
	
	if(front==NULL && rear==NULL)
    {
	       cout<<"underflow";
    }
	else
	{
		do
		{
		   cout<<temp->data<<" ";
		   temp=temp->next;
		
		}  while(temp!=front);
		
	}
}

void enqueue(int val)
{
	node *p = new(nothrow)node;
    if (!p)
    {
        cout<<"Overflow";
    }
	    p->data =val;
	    p->next=p;
	
	if(front==NULL && rear==NULL)
	{
	    front=p;
	    rear=p;
	}
	
	else
	{
	    node * p = new node;
	    p->data = val;
	    rear->next=p;
	    p->next = front;
	    rear=p;
	
	}
}


void dequeue()
{
	node *temp=front;
	
	if(front==NULL && rear==NULL)
	{
	cout<<"underflow";
	}
	else if(front==rear)
	{
		cout<<"Deleted value is: "<<front->data<<endl;
		front=NULL;
		rear=NULL;
		delete(front);
	}
	else
	{
	cout<<"\ndeleted value is: "<<front->data;
	rear->next = front->next;
	delete(front);
	front=rear->next;
	
	cout<<"\nAfter Deletion: ";
	
	}
}


int main()
{
    
enqueue(8);
enqueue(6);
traverse();
cout<<endl;

enqueue(4);
traverse();
cout<<endl;

enqueue(10);
enqueue(12);
traverse();
cout<<endl;

dequeue();
traverse();
cout<<endl;

dequeue();
traverse();
cout<<endl;

// dequeue();
// traverse();
// cout<<endl;

}