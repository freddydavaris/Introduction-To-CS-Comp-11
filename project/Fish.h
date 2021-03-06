#ifndef FISH_H
#define FISH_H
#include <string>
using std::string; 

// definition of FishTank class
class FishTank;

//class Fish declaration

class Fish
{
	public:
	
	// declaration of public variables and functions
		
		Fish();
		bool readFish();
		int getHeight();		
		int getWidth();	
		string getName();
		void setName(string given_name);
		void SetHSpeed(float new_speed);
		void SetVSpeed(float new_speed);		
		void setPos(int row, int col);			
		void printFish();		
		void move(int tankHeight, int tankWidth);		
		void draw(FishTank *tank);
		
  
	private:
	  
	// declaration of private variables and functions	

		float horizontalPosition;
		float horizontalSpeed;
		float verticalPosition;
		float verticalSpeed;
		int Fish_Height;
		int Fish_Width;
		static const int MAX_HEIGHT = 30; 
		static const int MAX_WIDTH = 60; 
		char Fish_image[MAX_HEIGHT][MAX_WIDTH];
		string name; 
		

};

#endif