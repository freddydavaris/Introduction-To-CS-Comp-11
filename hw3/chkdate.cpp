//
// chkdatee.cpp
//	    
//	modified by: Freddy Davaris
//	         on: 01/29/2014
//
#include <iostream>

using namespace std;

const int JAN = 31;
const int FEB = 29;
const int MAR = 31;
const int APR = 30;
const int MAY = 31;
const int JUN = 30;
const int JUL = 31;
const int AUG = 31;
const int SEP = 30;
const int OCT = 31;
const int NOV = 30;
const int DEC = 31;

const int FIRST_DAY_OF_MONTH = 1;
const int FIRST_MONTH = 1;
const int SECOND_MONTH = 2;
const int THIRD_MONTH = 3;
const int FOURTH_MONTH = 4;
const int FIFTH_MONTH = 5;
const int SIXTH_MONTH = 6;
const int SEVENTH_MONTH = 7;
const int EIGHTH_MONTH = 8;
const int NINETH_MONTH = 9;
const int TENTH_MONTH = 10;
const int ELEVENTH_MONTH = 11;
const int LAST_MONTH = 12;	
const int FIRST_YEAR = 1;
const int LAST_YEAR = 9999;
const int LEAP_MONTH = 2;
const int EXCEPTION_YEAR = 1900;

int main()
{
	int month, day, year;
	cin >> month >> day >> year;
	
	// Apply tests
	
	if (year % 4 != 0 &&
             month == LEAP_MONTH &&
             day == FEB) {
        cout << "N" << endl;
    }
   else if (month < FIRST_MONTH ||
	    month > LAST_MONTH) {
	cout << "N" << endl;
	}
   else if (year < FIRST_YEAR ||
	    year > LAST_YEAR) {
        cout << "N" << endl;
        }
   else if (day < FIRST_DAY_OF_MONTH ||
            (day > JAN && month == FIRST_MONTH)||
            (day > FEB && month == SECOND_MONTH)||
            (day > MAR && month == THIRD_MONTH)||
            (day > APR && month == FOURTH_MONTH)||
            (day > MAY && month == FIFTH_MONTH)||
            (day > JUN && month == SIXTH_MONTH)||
            (day > JUL && month == SEVENTH_MONTH)||
            (day > AUG && month == EIGHTH_MONTH)||
            (day > SEP && month == NINETH_MONTH)||
            (day > OCT && month == TENTH_MONTH)||
            (day > NOV && month == ELEVENTH_MONTH)||
            (day > DEC && month == LAST_MONTH)) { 
        cout << "N" << endl;
        }
       else if (year == EXCEPTION_YEAR &&
	     month == LEAP_MONTH &&
             day == FEB) {
        cout << "N" << endl;
        }
   
       else {
	 
	 cout << "Y" << endl;
    } 
	  return 0;
}
