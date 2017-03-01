using namespace std; 
// 
// implementation of a Fishtank class
//

#include "Fish.h"
#include "Fishtank.h"
#include "stdlib.h"
#include <iostream>
#include <string>


  
    FishTank::FishTank()
{
  for (int i = 0; i < MAX_HGT; i++) {
    for (int k = 0; k < MAX_WID; k++) {
	  Fishtank_image[i][k] = ' '; 
  }
 }
 NUM_OF_FISH_IN_TANK = 0; 
}
    
    FishTank::FishTank(int hgt, int wid)
{
  for (int i = 0; i < hgt; i++) {
    for (int k = 0; k < wid; k++) {
	  cout << FishTank_image[i][k]; 
  }
 }

}    
    
    
    void setHeight(int new_hgt)
    {
      hgt = new_hgt;
    }   
    void FishTank::setWidth(int new_wid)
    {   
      wid = new_wid; 
    }  
    int FishTank::getHeight()
    {
      return hgt;
    }
    int FishTank::getWidth()
    { 
      return wid;
    }
    int FishTank::getMaxFish()
    {
      return MAX_FISH; 
    }
    int FishTank::getNumFish()
    {
      return NUM_OF_FISH_IN_TANK;
    }  
    
    bool FishTank::addFish(Fish f)
    { cout << "Adding fish" << endl;
      if (NUM_OF_FISH_IN_TANK < MAX_FISH) { 
	NUM_OF_FISH_IN_TANK++; 
 cout << NUM_OF_FISH_IN_TANK << endl;
	return true;
      }
      else {
	return false 
      }
    } 
    void FishTank::clearTank()
    {
  for (int i = 0; i < MAX_HGT; i++) {
    for (int k = 0; k < MAX_WID; k++) {
	  FishTank_image[i][k] = ' '; 
  }
 }
}

    void FishTank::showTank()
        {
  for (int i = 0; i < MAX_HGT; i++) {
    for (int k = 0; k < MAX_WID; k++) {
	  cout << FishTank_image[i][k] = ' '; 
  }
 }
}

    
    void FishTank::updateAt(int row, int col, char newChar)
         {
     	   for (int i = 0; i < MAX_HEIGHT; i++) {
    for (int k = 0; k < MAX_WIDTH; k++) {
	 newChar = Fish.Fish_image[i][k]; 
    }
	   }
	 Fish.verticalPosition = row; 
	 Fish.horizontalPosition = col; 
	 }
      
    void FishTank::simulate(bool singleStep, int fps)
    {
      if (singleStep = false){
      }
      else if(system("read x < /dev/tty") != 0)
	exit(0);
 -
    }
	
