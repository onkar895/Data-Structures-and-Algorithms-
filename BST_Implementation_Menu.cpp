/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

class node
{
	public:
	node*left;
	int data;
	node*right;
};

node*root=NULL;

node*insert(node*root, int val)
{
	if(root==NULL)
	{
		node*p = new node;
        p->data = val;
        p->left = NULL;
        p->right = NULL;
        return p;
	}
	else if(val<root->data)
	{
		root->left = insert(root->left, val);
	}
	else
	{
		root->right= insert(root->right, val);
	}
	return root;
}


void preorder(node*root)
{
    if (root != NULL) 
    {
    	cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node*root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


void postorder(node*root)
{
    if (root != NULL) 
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


int minval(node*root)
{
    int min = root->data;
    while(root->left!=NULL)
    {
        min = root->left->data;
        root = root->left;
    }
    return min;
}

node*deletenode(node*root, int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    
    if(val<root->data)
    {
        root->left = deletenode(root->left,val);
        return root;
    }
    else if(val>root->data)
    {
        root->right = deletenode(root->right,val);
        return root;
    }
    
    if(root->right==NULL)
    {
        node*temp = root->left;
        delete(root);
        return temp;
    }
    else if(root->left==NULL)
    {
        node*temp = root->right;
        delete(root);
        return temp;
    }
    
    else
    {
        root->data = minval(root->right);
        root->right = deletenode(root->right, root->data);
        return root;
    }
}


int main()
{
    int choice,val;
	node *p;
	
    cout<<"Menu Driven Program of Binary Search Tree Implementation\n";
    cout<<"\n1.Insertion \n2.Preorder\n3.Inorder\n4.Postorder\n5.Deletion\n6.Exit\n";
    
    while(1)    
    {
        cout<<"\nEnter the choice: ";
        cin>>choice;
          
        switch(choice)
        {
            case 1: cout<<"Enter the value which you want to insert: ";
                    cin>>val;
                    root=insert(root,val);
                    break;
            case 2: preorder(root);
                    break;
            case 3: inorder(root);
                    break;
            case 4: postorder(root);
                    break;
            case 5: cout<<"Enter the value which you want to delete: ";
                    cin>>val;
				    root=deletenode(root,val);
				    break;		
			case 6: exit(0);
              
           default: cout<<"\nInvalid choice!...";
        }
    }
    
    return 0;
    
}