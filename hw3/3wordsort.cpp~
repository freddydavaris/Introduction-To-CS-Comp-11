#include <iostream>

/* 
     3wordsort.cpp -- program to print out three words in alpha order

     usage: ./3wordsort
     input: three words
    output: the three words in alphabetical order, separated by spaces
      note: Do not prompt the user; Do not print explanations on output.
            In fact, don't modify main().
    
    modified by: Freddy Davaris
    modified on: 02/01/2017
 */

using namespace std;

void printInOrder(string s1, string s2, string s3);

int main()
{
	string	w1, w2, w3;		// input values
	
	cin >> w1 >> w2 >> w3;		// read in three values
	printInOrder(w1, w2, w3);	// function does not return anything

	return 0;
}

//
// printInOrder() prints out the three words in alpha order
//		  with spaces between them, no return value
//
void printInOrder(string x, string y, string z)	
{
        if (x < y &&
            x < z) {
    
             if (y < z) {
      
                cout << x << " " << y << " " << z << endl;
        }
           else { 
	        cout << x << " " << z << " " << y << endl;
	   }    
  }
        if  (y < x &&
             y < z) {
    
             if (x < z) {
      
                cout << y << " " << x << " " << z << endl;
        }
           else { 
	        cout << y << " " << z << " " << x << endl;
	   }    
  }
        if  (z < y &&
             z < x) {
    
             if (y < x) {
      
                cout << z << " " << y << " " << x << endl;
        }
           else { 
	        cout << z << " " << x << " " << y << endl;
	   }    
  }
   if  (z == y &&
        y == x &&
        z == x) {
    
                cout << z << " " << y << " " << x << endl;
        }
  
}
