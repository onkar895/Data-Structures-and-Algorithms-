/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

#define max 30             
 
int queue[max],front=-1,rear=-1;           
 
void enqueue(int num) 
{
    if(rear==max-1)  
    {
        cout<<"OVERFLOW!";
    }
    else if(front==-1 && rear==-1)
    {
        front++;
        rear++;
        queue[rear]=num;
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
} 

bool isEmpty()
{
 if(front==-1 && rear==-1)  
        return 1;
        else 
		return 0;
}


int dequeue() 
{
	int deleted;
    if(front==-1 && rear==-1)  
    {
        cout<<"UNDERFLOW!";
        exit(1) ;
    }
    else if(front == rear)
    {
    	deleted=queue[front]; 
    	front =-1;
    	rear =-1;
	}
    else
    {
        deleted=queue[front]; 
		front++;
    }
    return deleted;
}


 
void show()
{

    if(front==-1 && rear==-1)    
    {
        cout<<"UNDERFLOW!";
    }
    else
    {
        for(int i=front;i<=rear;i++) 
        {
            cout<<"\t"<<queue[i];
        }
        cout<<endl;
    }
}

int main(){
    
    int u;
    int i = 5;
    int visited[7] = {0,0,0,0,0,0,0};
    int a [7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,1,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };
    
    cout<<i;
    visited[i] = 1;
    enqueue(i);             // Enqueue i for INSERTION
    while (!isEmpty())
    {
        int u = dequeue();
        for (int j = 0; j < 7; j++)
        {
            if(a[u][j] ==1 && visited[j] == 0){
                cout<<"\t"<<j;
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
    return 0;
}