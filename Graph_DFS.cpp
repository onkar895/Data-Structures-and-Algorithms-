/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
 
int visited[5] = {0,0,0,0,0};

    int a[5][5] = {
        {0,1,1,1,0},
        {1,0,1,0,0},
        {1,1,0,1,1},
        {1,0,1,0,1},
        {0,0,1,1,0}
    };
 
void DFS(int i)
{
    cout<< i <<" ";
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if(a[i][j]==1 && !visited[j])
        {
            DFS(j);
        }
    }
}
 
int main(){ 
     
    DFS(5); 
    DFS(6);
    DFS(8);
    DFS(10);
    DFS(12);
    
    return 0;
}

