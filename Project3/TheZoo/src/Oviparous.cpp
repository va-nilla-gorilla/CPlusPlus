/*
 * Description: Project Three
 * Description: Oviparous.cpp
 * Description:
 * Description:
 */

// Shows 80 Char width & also helps separate code while working on it
//---------------------------->80  CHAR WIDTH<--------------------------------//

/*******************************************************************\
 *  All code has been edited for readability, adding whitespace,   *
 *  proper indentation and applying style guidelines and best      *
 *  practices throughout                                           *
\*******************************************************************/

//---------------------------->80  CHAR WIDTH<--------------------------------//

// User defined header file containing all relative Declarations & Inclusions
#include "Oviparous.h"
// Default constructor
Oviparous::Oviparous() {

	this->numOfEggs = 0;
	this->type = "Oviparous";
}
// Accessor
int Oviparous::getNumOfEggs() {
	return this->numOfEggs;
}
// Mutator
void Oviparous::setNumOfEggs(int numOfEggs){
	this->numOfEggs = numOfEggs;
}
// Display function
void Oviparous::Print() {
	std::cout  << std::setfill('0') <<
	std::setw(6) << getTrackNum() <<
	std::setw(16) << std::setfill(' ') << getName() <<
	std::setw(16) << type <<
	std::setw(16) << subType <<
	std::setw(10) << std::setprecision(2) << numOfEggs <<
	std::setw(10) << 0 << "\n";
	std::cout << std::setfill('=') << std::setw(75) << "" << std::endl;

}
