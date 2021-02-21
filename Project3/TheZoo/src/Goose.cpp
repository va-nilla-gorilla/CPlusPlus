/*
 * Description: Project Three
 * Description: Goose.cpp
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
#include "Goose.h"
// Default constructor
Goose::Goose() {

	Oviparous();
	this->subType = "Oviparous";
}
// Constuctor w/ parameter
Goose::Goose(int numOfEggs){
	Oviparous();
	this->subType = "Oviparous";
	this->setNumOfEggs(numOfEggs);
}
