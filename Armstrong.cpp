/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
 
int main() 
{
        int num,temp,arm;
        
        cout<<"Enter the number which you want to check:\n ";
        cin>>num;
        temp = num;
        arm = 0;
 
        while (num > 0) {
 
            int rem = num % 10;
            arm = arm + (rem * rem * rem);
            num = num / 10;
        }
 
          if (temp == arm) {
            cout<<("Yes, It's an Armstrong Number");
        }
        else {
            cout<<("No, It's not an Armstrong Number");
        }
    return 0;
}
