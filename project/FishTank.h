#ifndef FISHTANK_H
#define FISHTANK_H

#include <string>
#include <unistd.h>
using std::string; 

class Fishtank
{
  private:
  
    static const int MAX_FISH = 40; 
    
    static const int MAX_HGT = 50; 
    
    static const int MAX_WID = 200; 
    
    string Fishtank_image[MAX_WID][MAX_HGT];
    
    int NUM_OF_FISH_IN_TANK;
    
    
    
  public:
    
    FishTank();
    
    FishTank(int hgt, int wid);
    
    void setHeight(int new_hgt);
    
    void setWidth(int new_wid);
    
    int getHeight(); 
    
    int getWidth();
    
    int getMaxFish();
    
    int getNumFish();
    
    bool addFish(Fish f); 
    
    void clearTank(); 
    
    void showTank();
    
    void updateAt(int row, int col, char newChar);
    
    void simulate(bool singleStep, int fps); 
    
    // code with enter 
    
};

#endif
    
  