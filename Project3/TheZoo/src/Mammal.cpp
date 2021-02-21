/*
 * Description: Project Three
 * Description: Mammal.cpp
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
#include "Mammal.h"
// Default constructor
Mammal::Mammal() {

	this->nurse = 0;
	this->type = "Mammal";
}
// Accessor
int Mammal::getNurse() {
	return this->nurse;
}
// Mutator
void Mammal::setNurse(int nurse){
	this->nurse = nurse;
}
// Display function
void Mammal::Print() {
	std::cout  << std::setfill('0') <<
	std::setw(6) << getTrackNum() <<
	std::setw(16) << std::setfill(' ') << getName() <<
	std::setw(16) << type <<
	std::setw(16) << subType <<
	std::setw(10) << 0 <<
	std::setw(10) << nurse << "\n";
	std::cout << std::setfill('=') << std::setw(75) << "" << std::endl;
}
