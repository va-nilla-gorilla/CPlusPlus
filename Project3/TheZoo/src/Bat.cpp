/*
 * Description: Project Three
 * Description: Bat.cpp
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
#include "Bat.h"
// Default constructor
Bat::Bat() {
	Mammal();
	this->subType = "Bat";

}
// Constructor w/ parameter
Bat::Bat(int nurse){
	Mammal();
	this->subType = "Bat";
	this->setNurse(nurse);
}
