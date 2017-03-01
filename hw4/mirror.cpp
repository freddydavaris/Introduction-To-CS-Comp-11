//
// mirror.cpp -- 
// four rows are created each an increasing sequence of integers up
// to a maximum number, then a vertical line (the `mirror´)
// then the same sequence in decreasing order. 
//
// modified by:Freddy Davaris
//          on:02/17/2014
//

#include <iostream>

using namespace std; 

void mirror(int value);



int main () {
  
  int value;
  
  
  cout << "Maximum value?  ";
  cin >> value; 
  
  mirror(value);
  
  return 0;
}

// Functions:


void mirror(int value)
{
  if (value >= 0) {
 int i = 0;
 int n = 0;
 int w = 0;
 int x;
 while (n < 4) {
 x = value;
  for (i = 0; i <= value; i++) {

 cout << i;
 
  }
  cout << "|"; 
  for (w = 0; w <= value; w++) {
 cout << x;
 x--;
  }
  cout << endl;
  n++;
 }
  }
     
}

    
  
  


