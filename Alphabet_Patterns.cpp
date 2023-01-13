/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n=5;
 
  for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             cout<<((char)(i+64));
         }
 
         cout<<endl;
     }
     
     cout<<endl;
     
     
  for(i=1;i<=n;i++)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(i+64));
         }
 
         cout<<endl;
     }     
     
     cout<<endl;
     
     
  for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
     
     cout<<endl;
     
  
  for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             cout<<((char)(n-i+1+64));
         }
 
         cout<<endl;
     }
     
     cout<<endl;
     

  for(i=n;i>=1;i--)
     {
         for(j=n;j>=i;j--)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
    
     cout<<endl;
     
   
   for(i=1;i<=n;i++)
     {
         for(j=n;j>=i;j--)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
     
     cout<<endl;
     
     
     
  char s[]="INDIA";
 
   for(i=0;s[i];i++)
    {
        for(j=0;j<=i;j++)
        cout<<s[j];
 
     cout<<endl;
     }
 
  
 
  return 0;
}
