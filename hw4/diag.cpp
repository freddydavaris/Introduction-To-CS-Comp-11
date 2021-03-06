//
// diag.cpp -- reads in two strings and the
// height of the pattern. The program prints a picture
// as shown in the "assignement 4" handout with the 
// two strings. 
//
// modified by:Freddy Davaris
//          on:02/16/2014
//

#include <iostream>

using namespace std; 

string draw_picture(string alpha, string beta, int height, int value);
void string_multiplication(string STRING, int height);


int main () {
  
  string input1;
  string input2;
  int height;
  int value;
  
  
  cout << "First string?  ";
  cin >> input1; 
  cout << "Second string?  "; 
  cin >> input2;
  cout << "Height?  ";
  cin >> height;
  value = 0;
  draw_picture(input1, input2, height ,value);
  
  return 0;
}

// Functions:

void string_multiplication(string STRING, int height)
{
   
   for (int n = height; n > 0; n--) 
    { 
       
        cout << STRING;           
    }
}

string draw_picture(string alpha, string beta, int height, int value)
{
  
  string result;
 
  while (height > 0) {

   string_multiplication(beta, value);
   string_multiplication(alpha, (height - 1));
   cout << endl;
  
  value++;
  height--; 
  }
  
  return 0;
      
}

    
  
  


