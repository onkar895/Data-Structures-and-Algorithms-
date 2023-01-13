/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n+1)-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=(n-i);k++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    
   for(i=5;i>=1;i--)
    {
        for(k=1;k<=(n-i);k++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
   
   for(i=1;i<=n;i++)
   {
       for(k=1;k<=(n-i);k++)
       {
           cout<<" ";
       }
       
      for(j=1;j<=i;j++)
      {
          cout<<"* ";
      }
      cout<<endl;
   }
   
   cout<<endl;
   
   
   for(i=5;i>=1;i--)
   {
       for(k=1;k<=(n-i);k++)
       {
           cout<<" ";
       }
       
      for(j=1;j<=i;j++)
      {
          cout<<"* ";
      }
      cout<<endl;
   }
   
   cout<<endl;
   
   
   for(i=1;i<=n;i++)
   {
       for(k=1;k<=(n-i);k++)
       {
           cout<<" ";
       }
       
      for(j=1;j<=(2*i-1);j++)
      {
          cout<<"*";
      }
      cout<<endl;
   }
   
   cout<<endl;
   
   
   for(i=5;i>=1;i--)
   {
       for(k=1;k<=(n-i);k++)
       {
           cout<<" ";
       }
       
      for(j=1;j<=(2*i-1);j++)
      {
          cout<<"*";
      }
      cout<<endl;
   }

    return 0;
}
