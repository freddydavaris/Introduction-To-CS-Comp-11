// iftest.cpp
//      purpose: report number of digits in an integer
//        shows: use of output, input, conditional statements
//         note: has bugs, needs work
//
//  modified by: Freddy Davaris
//         date: 01/26/2014
//

#include <iostream>
using namespace std;

int main()
{
	int input;

	cout << "Enter a number: ";
	cin  >> input;

	if (input >= 100) {
		cout << "input has at least three digits" << endl;
	} else if ( input >= 10) {
		cout << "input has two digits" << endl;
	}   

	if ( input > 0) {
		cout << "input is positive" << endl;	}
	else  {
		cout << "input is negative" << endl;
	}
	if ( input <= -100) { 
            cout << "input has at least three digits" << endl; }
	   
        else if ( input <= -10) {
	    cout << "input has two digits" << endl; }

	else if (input < 10) {
	    cout << "input has one digit" << endl; }

	if  (input == 0)  {
	    cout << "input is 0" << endl;  }

        return 0;
}
