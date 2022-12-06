#include <iostream>

using namespace std;

class node                              // Declaring the node class
{
    public:
    int data;                           // The data member is an integer, and 
    node *next;                         // the next member is a pointer to another node (address of another node).
};

node *head = NULL;                      // Pointer to the starting node which named as "head" of node type which is currently holding adsress 'NULL'.

void insertatbeg(int val)               // Defining Function
{
    node *p = new node;                 // Creation of new node
    p->data = val;                      // Putting data
    p->next = NULL;                     // Putting adsress as NULL
    
    if(head == NULL)
    {
        head = p;            
    }
    else
    {
        p->next = head;                  // Linking between the nodes
        head = p;                        // head points to the 'p' because it is a pointer holding some address of 'p' node
    }
}

void insertatend(int val)
{
    node *p = new node;                  // Creation of new node
    p->data = val;                       // Putting data
    p->next = NULL;                      // Putting adsress as NULL
    
    node*temp = head;                    // here temp holding the address of head
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    
    temp->next = p; 
    
}

void insertatposition(int val, int pos)
{
    node *p = new node;                  // Creation of new node
    p->data = val;                       // Putting data
    p->next = NULL;                      // Putting adsress as NULL
    
    node *temp = head;                   // here temp holding the address of head
    
    int i = 1;
    while (i < pos-1)
    {
        temp = temp->next;
        i++;
    }
    
    p->next = temp->next;
    temp->next = p;
}

void traverse()                           // For traversing the nodes
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteatbeginning()            // Delete the element at beginning
{
    node * temp = head;
    head = head->next;
    delete(temp);
}
 
void deleteatend()                  // Delete the element at end
{
    node *temp = head;
    node *temp2 = NULL;
    
    while(temp->next!=NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    
    delete(temp);
    temp2->next=NULL;
}

void deleteatposition(int val,int pos)           // Delete the element at random position
{
    node *temp = head;
    node *temp2 = NULL;
    
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
    int choice , val, pos;
    
    cout<<"\n\t\t* * * * * MENU DRIVEN PROGRAM FOR INSERTION AND DELETION OF THE LINKED LISTS * * * * * \n";
    
    cout<<"\n1.Insertion at Beginning \n2.Insertion at End \n3.Insertion at Random Position \n4.Traverse \n"
    "5.Deletion at Beginning \n6.Deletion at End \n7.Deletion at Random Position \n8.Exit\n";
    
    while(1)
    {
        cout<<"\nEnter the Choice ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: cout<<"Enter the value which you want to insert ";
                    cin>>val;
                    insertatbeg(val);
                    break;
            case 2: cout<<"Enter the value which you want to insert ";    
                    cin>>val;
                    insertatend(val);
                    break;
            case 3: cout<<"Enter the value which you want to insert ";    
                    cin>>val;
                    cout<<"Enter the position where you want to insert the value ";
                    cin>>pos;
                    
                    insertatposition(val,pos);
                    break;
            case 4: traverse();
            
            case 5: deleteatbeginning();
                    break;
            case 6: deleteatend();
                    break;
            case 7: cout<<"Enter the position where you want to delete the value ";
                    cin>>pos;
                    cout<<"Enter the value which you want to delete ";    
                    cin>>val;
                    deleteatposition(val,pos);
                    break;
            case 8: exit(0);
            
            default: cout<<"\n INVALID CHOICE....";
        }
    }
    
    return 0;
}