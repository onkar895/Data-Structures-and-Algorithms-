/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int ch;
    char choice;
    cout<<"Menu Driven Program\n";
    
    do { 
    cout<<"Plz enter your choice:"<<"\n1.Coffee\n"<<"2.Tea\n";
    cin>>ch;
    
    
    if (ch == 1)
    {
        cout<<"*****Plz Enjoy your Coffee*****\n";
    }
    else if (ch == 2)
    {
        cout<<"*****Plz Enjoy your Tea*****\n\n";
    } 
    else
    {
        cout << "Wrong Input";
    }
    
   
	cout<<"*****If you want to continue plz enter the choice again (Y/N):***** \n";
	cin >> choice; 
	
} while (choice == 'Y' || choice == 'y'); 

  cout << "Don't want to enter again";
    

    return 0;
}