/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int sub(int a, int b)
{
    int c = a - b;
    return c;
}

int mul(int a, int b)
{
    int c = a * b;
    return c;
}

int divi(int a, int b)
{
    int c = a / b;
    return c;
}

int main()
{
    int n1,n2,ch;
    char choice;
    cout<<"Enter the numbers on which you want to perform operations:\n";
    cin>>n1>>n2;
    
    do{
    cout<<"Plz Enter the choice:\n"<<"1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n";
    cin>>ch;
    if(ch == 1)
    {
    int result = add(n1,n2);
    cout<<"Addition is: "<<result;
    }
    
    else if(ch == 2)
    {
    int result = sub(n1,n2);
    cout<<"Substraction is: "<<result;
    }
    
    else if(ch == 3)
    {
    int result = mul(n1,n2);
    cout<<"Multiplication is: "<<result;
    }
    
    else if(ch == 4)
    {
    int result = divi(n1,n2);
    cout<<"Division is: "<<result;
    }
    
    else
    {
        cout<<"You have entered a wrong choice\n";
    }
    
    cout<<"\nIf you want to continue plz enter the choice again (Y/N):\n";
    cin>>choice;
    
    } while (choice == 'Y' || choice == 'y'); 
    
    cout<<"Don't want to continue\n";
    
    return 0;
}
