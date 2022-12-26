#include<iostream>
using namespace std;

class node
{
	public:
	node *left;
	int data;
	node *right;
};

node *root=NULL;

node* insert(node* root, int val)
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

void preorder(node* root)
{
    if (root != NULL) 
    {
    	cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root)
{
    if (root != NULL) 
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


void postorder(node* root)
{
    if (root != NULL) 
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


int main()
{
    int choice,val;
	node *p;
	
    cout<<"Binary Search Tree Insertion and Traversal\n";
    cout<<"\n1.Insertion \n2.Preorder\n3.Inorder\n4.Postorder\n";
    
    while(1)    
    {
        cout<<"\nEnter the choice: ";
        cin>>choice;
          
        switch(choice)
        {
            case 1: cout<<"Enter the value to be inserted: ";
                    cin>>val;
                    root=insert(root,val);
                    break;
            case 2: preorder(root);
                    break;
            case 3: inorder(root);
                    break;
            case 4:postorder(root);
                    break;
        }
    }
    
    return 0;
    
}
