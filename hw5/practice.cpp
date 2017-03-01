#include <iostream>
using namespace std;

const int SPACE_NAMES =  3;
const int SPACE_YEARS = 3; 
const int SENTINEL = -1;

int main()
{
        int years[SPACE_YEARS];
	string names[SPACE_NAMES];
        int pos = 0;
        int y;
	string x;
     
	

        do {
                cin >> y >> x;
                y = years[pos];
                x = names[pos];  
		pos++;
        } 
	
        while (y != SENTINEL);
	 if ((pos > SPACE_NAMES + 1) || (pos > SPACE_YEARS)) {
	  cerr << "too much data" << endl; 
      
	return 1; 
	 } 
	 
	 return 0;
}
