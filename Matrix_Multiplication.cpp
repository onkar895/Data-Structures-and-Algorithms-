#include <iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],Result[3][3],i,j;
    int mul = 0;
    
    cout<<"Enter the 1st Matrix\n";
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the 2nd Matrix\n";
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
               mul += a[i][k] * b[k][j];
            }
            Result[i][j] = mul;
            mul = 0;
        }
          
    }
    
    cout<<"The Multiplication of 1st and 2nd Matrix is:\n";
   
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<Result[i][j]<<" ";
        }
         cout<<"\n";
    }
       
        
    return 0;
}
