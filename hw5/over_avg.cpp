// Modified by: Freddy Davaris
// Date : 02/24/2014
// Program name : over_avg
// Purpose : eads in years from cin until it reads a 
// sentinel of 0 (zero), then prints how many of 
// those years are over the average value of all the input. 

#include <iostream>
using namespace std;

const int SPACE    =  30000;
const int SENTINEL = 0;

/////////////////////////////////////////////////////////////////////////
///////////////////////////   Interfaces  ///////////////////////////////
/////////////////////////////////////////////////////////////////////////



// returns the average (mean) value
// of the integers in the sequence
double average(int nums[]);

// prints how many years are over than the average
int num_avg(int nums[], double avg);



/////////////////////////////////////////////////////////////////////////
/////////////////////////////   Client  /////////////////////////////////
/////////////////////////////////////////////////////////////////////////

int main()
{
        int years[SPACE];
        int pos = 0;
        int y;
        double avg;
	int howmany;

        do {
                cin >> y;
                years[pos++] = y;
		  
        } 
	
        while (y != SENTINEL);
	 if (pos > SPACE + 1) {
	  cerr << "too much input" << endl; 
      
	return 1; 
	 }
        
        avg = average(years);
	num_avg(years, avg);
        howmany = num_avg(years,avg);
        cout << howmany << endl;

        return 0;
}

/////////////////////////////////////////////////////////////////////////
///////////////////////////   Abstraction ///////////////////////////////
///////////////////////////     Barrier   ///////////////////////////////
/////////////////////////////////////////////////////////////////////////

//////////////////////////  Implementations /////////////////////////////

// print a sequence of numbers
// terminated by a sentinel


// returns the average (mean) value
// of the integers in the sequence
double average(int nums[SPACE])
{
  double sum = 0; 
  double average; 
  int pos = 0;
 
        while (nums[pos] != SENTINEL) {
		sum = sum + nums[pos]; 
                pos++;
	}
  
	average = sum / pos;
	return average;
        
}

int num_avg(int nums[], double avg)
{
  int sum = 0;
  int pos = 0; 
  
	while (nums[pos] != SENTINEL) {
	  if (nums[pos] > avg) {
	      sum = sum + 1; 
	  }
	      pos++; 
	}
	
      return sum;
        
}

