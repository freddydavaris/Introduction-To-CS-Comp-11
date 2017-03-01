// Purpose: By using the files Fish.h, Fish.cpp FishTank.h
//          and FishTank.cpp, this program gets all the needed
//          values passed in (cin) and at then runs the
//          simulation
// Modified by: Freddy Davaris
// Modified on: 04/03/2014


#include <iostream>
#include <cstdlib>
#include "Fish.h"
#include "FishTank.h"

using namespace std;

int main()
{ 
  bool singleStep = true;
  int fps = 15;
  FishTank tank;
  string word;
  string input1, input2;
  int wid, hgt;
  cin >> input1;
    if (input1 == "tank"){
  cin >> hgt;
  cin >> wid;
  tank.setHeight(hgt);
  tank.setWidth(wid);
}

bool isFish = true;

while (isFish == true) {
    Fish newFish;
      if (!newFish.readFish()) {
	break;
      }
      
      if (!tank.addFish(newFish)) {
	 break;
      }
     
}
  tank.simulate(singleStep, fps);

  return 0;
}