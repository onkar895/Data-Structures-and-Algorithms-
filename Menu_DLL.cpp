/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>

using namespace std;

class node{
	public:
	node *prev;
	int data;
	node *next;
};

node *head=NULL;

void insertatbeg(int val)
{
	node *p=new node;
	p->data =val;
	p->prev=NULL;
	p->next=NULL;
	
	
	if(head==NULL)
	{
		head=p;
	}
	else
	{
	p->next=head;	
	head->prev=p;
	head=p;
	}
}

void display()
{
	node*temp=head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
    }
}


void insertatend(int val)
{
	node *p=new node;
	p->data =val;
	p->prev=NULL;
	p->next=NULL;
	
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=p;
	p->prev=temp;
}


void insertatpos(int val, int pos)
{
	
	node *p=new node;
	p->data =val;
	p->prev=NULL;
	p->next=NULL;
	
	node *temp=head;

	int i=1;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	if(temp->next==NULL)
	{
		temp->next=p;
		p->prev=temp;
	}
	else
	{
	p->next=temp->next;
	p->prev=temp;
	temp->next->prev=p;
	temp->next=p;
    }
}

void deleteatbeg()
{
    node *temp = head;
	head=head->next;
	head->prev=NULL;
	delete(temp);
}

void deleteatend()
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->prev->next=NULL;
	delete(temp);
}

void deleteatpos(int pos)
{
	node *temp=head;
	int i=1;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	temp->prev->next=temp->next;
	temp->next->prev=temp->prev;
	delete(temp);
}
int main()
{
	int choice,val,pos;
    cout<<" MENU DRIVEN PROGRAM OF DOUBLY LINKED LIST ";   
    cout<<"\n1.Insertion at beg\n2.Insertion at end\n3.Insertion at random position\n4. Display\n"
	"5.Deletion at beg\n6.Deletion at end\n7.Deletion at random position\n8.Exit";
	
    while(1)    
    {
        cout<<"\nEnter the choice:";
        cin>>choice;
          
        switch(choice)
        {
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    insertatbeg(val);
                    break;
            case 2: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    insertatend(val);
                    break;
            case 3: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    cout<<"Enter the position where value to be inserted: ";
                    cin>>pos;
                    insertatpos(val,pos);
                    break;
            case 4:display();  
					break;
			case 5:deleteatbeg();
					break;		
			case 6:deleteatend();
					break;
			case 7:cout<<"Enter the position where value to be deleted: ";
                    cin>>pos;
					deleteatpos(pos);
					break;				      
            case 8: exit(0);
              
            default: cout<<" Invalid choice.......... ";
        }
    }
    return 0;
}
