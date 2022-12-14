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
		while(temp!=NULL)
		{
		cout<<temp->data<<" ";
		temp=temp->next;
		}
	}
}

void enqueue(int val)
{
	node *p=new node;
	p->data =val;
	p->next=NULL;
	if(front==NULL && rear==NULL)
	{
	front=p;
	rear=p;
	}
	else
	{
	rear->next=p;
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
		delete(temp);
	}
	else
	{
	cout<<"\ndeleted value is: "<<front->data;
	front=front->next;
	delete(temp);
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

dequeue();
traverse();
cout<<endl;

}