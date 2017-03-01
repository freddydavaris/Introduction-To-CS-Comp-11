// Modified by: Freddy Davaris
// Date : 02/24/2014
// Program name : avg_age.cpp
// Purpose : eads in years from cin until it reads a 
// sentinel of 0 (zero), then prints how many of 
// those years are over the average value of all the input. 

#include <iostream>

using namespace std;

const int SPACE_NAMES =  50000;
const int SPACE_YEARS = 50000; 
const int SENTINEL_NUM = -1;
const string SENTINEL_STRING = "DONE";

/////////////////////////////////////////////////////////////////////////
///////////////////////////   Interfaces  ///////////////////////////////
/////////////////////////////////////////////////////////////////////////


double num_average(string names[SPACE_NAMES], int nums[SPACE_YEARS], string x);

int num_names(string names[SPACE_NAMES], string x);



/////////////////////////////////////////////////////////////////////////
/////////////////////////////   Client  /////////////////////////////////
/////////////////////////////////////////////////////////////////////////

int main()
{
        int years[SPACE_YEARS];
	string names[SPACE_NAMES];
        int pos = 0;
        int y;
	string x;
        double average;
        int howmanynames;

        do {
	    if (pos == SPACE_YEARS) {
		cerr << "too much data" << endl;
		return 1;
	    }
                cin >> y >> x;
                years[pos] = y;
                names[pos] = x;  
		pos++;

	} while (y != SENTINEL_NUM);


	
        cout << "Enter a name:"; 
        cin >> x;
        howmanynames = num_names(names, x); 
	 if (howmanynames == 0) {
	   cout << "name not found" << endl; 
	   
	 return 1; 
	 }
	average = num_average(names, years, x); 
        cout << "average age" << " " << "=" << " " << average << endl;
        return 0;
}

/////////////////////////////////////////////////////////////////////////
///////////////////////////   Abstraction ///////////////////////////////
///////////////////////////     Barrier   ///////////////////////////////
/////////////////////////////////////////////////////////////////////////

//////////////////////////  Implementations /////////////////////////////



//This program gives the sum of how many names 
//of the input are found in the data file

double num_average(string names[SPACE_NAMES], int nums[SPACE_YEARS], string x)
{
  double sum_of_names = 0; 
  double sum_of_years = 0; 
  int pos = 0;
  int extrayear;
  int current_year = 2014; 
  double average = 0; 
  
        while (nums[pos] != SENTINEL_NUM) {
		
	  if (names[pos] == x){
	    sum_of_names = sum_of_names + 1;
	    extrayear = nums[pos];
	    sum_of_years = sum_of_years + extrayear;  
	  }
                pos++;
	}

	average = current_year - (sum_of_years / sum_of_names); 
	return average;
}

int num_names(string names[SPACE_NAMES], string x)
{
  int sum_of_names = 0; 
  int pos = 0;
  
        while (names[pos] != SENTINEL_STRING) {
	    if (names[pos] == x) {
	    sum_of_names = sum_of_names + 1;	    
	    }
	  pos++; 
	}

  return sum_of_names;
}
