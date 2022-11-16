/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
  
  ;
  for (int i = 0; i < 5; i++) {
    
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }
   
    for (int k = 0; k < 2 * (5 - i) - 1; k++) {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}