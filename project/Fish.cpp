using namespace std; 
// 
// implementation of a Fish class
//
#include "FishTank.h"
#include "Fish.h"
#include <iostream>
#include <unistd.h>
#include <string>


// Purpose: Constructor that initialises a fish's picture map 
//          at all spaces, its size and speed numbers to
//          0 and its name to an empty string.
// Arguments: No arguments.

Fish::Fish()
{
  for (int i = 0; i < MAX_HEIGHT; i++) {
    for (int k = 0; k < MAX_WIDTH; k++) {
	  Fish_image[i][k] = ' '; 
    }
 }
 Fish_Height = 0;
 Fish_Width = 0;
 verticalPosition = 0;
 horizontalPosition = 0; 
 verticalSpeed = 0; 
 horizontalSpeed = 0; 
 name = " ";
}

// Purpose: Reads a fish specification from cin. It then sets 
//          the fish's state according to the values and picture
//          map read in and returns true. If the function cannor
//          read a fish specification, it returns false. 
// Arguments: No arguments. 

bool Fish::readFish()
{ 
  string isFish;
  string input_1;
  string line; 

   cin >> isFish;
   cerr << "FISH:" << isFish << endl;
	if(isFish != "fish"){
		cerr << "NO FISH ANYMORE\n";
		return false;
	}
   cin >> Fish_Height;
   cin >> Fish_Width;
   cerr << "FISH WIDTH: " << Fish_Width << endl;
   cin >> verticalPosition;
   cin >> horizontalPosition;
   cin >> verticalSpeed;
   cin >> horizontalSpeed;
   cin >> name;
    getline(cin, line);
  for (int i = 0; i < Fish_Height; i++) {
   
    getline(cin, line);
  for (unsigned k = 0; k < line.length(); k++) {
       Fish_image[i][k] = line[k];
    
  }
  }
   return true;
  }


// Purpose: Returns the Fish's name 
// Arguments: No arguments.

string Fish::getName() 
{
  
  return name;
  
}

// Purpose: Sets the Fish's given name to name.
// Arguments: string given_name inputed in cin. 

void Fish::setName(string given_name) 
{
  
  name = given_name; 
  
}

// Purpose: Sets the Fish's horizontal speed.
// Arguments: float new_speed inputed in cin.

void Fish::SetHSpeed(float new_speed) 
{ 
  
  horizontalSpeed = new_speed; 
  
}

// Purpose: Sets the Fish's vertical speed.
// Arguments: float new_speed inputed in cin.

void Fish::SetVSpeed(float new_speed) 
{
  
  verticalSpeed = new_speed;

}

// Purpose: Sets the position of the Fish to be the 
//          given position.
// Arguments: int row and int col inputed in cin.

void Fish::setPos(int row, int col) 
{
  
  verticalPosition = row; 
  horizontalPosition = col; 
  
}

// Purpose: Returns the height of the fish's actual
//          character map picture.
//Arguments: No arguments.

int Fish::getHeight() 
{ 
    return Fish_Height; 
    
}

// Purpose: Returns the width of the fish's actual
//          character map picture.
//Arguments: No arguments.

int Fish::getWidth() 
{
  
    return Fish_Width; 
    
}    

// Purpose: Used for debugging purposes. Prints out 
//          the fish character map picture. 
// Arguments: No arguments.

void Fish::printFish() 
{
  
  for (int i = 0; i < Fish_Height; i++) {
    for (int k = 0; k < Fish_Width; k++) {
      cout << Fish_image[i][k];
    }
    cout << endl;
  } 
}

//  Purpose: Updates the fish's position according to its current
//           position and horizontal and vertical speeds.
// Arguments: int tankHeight and int tankWidth. 

void Fish::move(int tankHeight, int tankWidth)
  { 
   
    verticalPosition = verticalPosition + verticalSpeed;
    horizontalPosition = horizontalPosition + horizontalSpeed;

    
    if (horizontalPosition >= tankWidth) {
      horizontalPosition = horizontalPosition - tankWidth;
    }
    if (horizontalPosition < 0) {
      horizontalPosition = horizontalPosition + tankWidth;
    }
    if (verticalPosition >= tankHeight) {
      verticalPosition = verticalPosition - tankHeight;
    }
    if (verticalPosition < 0) {
      verticalPosition = verticalPosition + tankHeight;
    }
     
  }

// Purpose: Draw's the fish's character map into the tank.
// Arguments: Pointer to the tank.

void Fish::draw(FishTank *tank) 
{
   for (int i = 0; i < Fish_Height; i++) {
      for (int k = 0; k < Fish_Width; k++) {

	int newhorizontalPosition = (int) horizontalPosition;
	int newverticalPosition = (int) verticalPosition;
	// The above Functions surve to convert the 
	// floating points into integers in order to be
	// passed ine to the function updateAt.

 tank->updateAt(newverticalPosition + i, newhorizontalPosition + k, Fish_image[i][k]);
    }
    }
}
  