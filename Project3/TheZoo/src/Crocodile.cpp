/*
 * Description: Project Three
 * Description: Crocodile.cpp
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
#include "Crocodile.h"
// Default constructor
Crocodile::Crocodile() {

	Oviparous();
	this->subType = "Crocodile";
}
// Constructor w/ parameter
Crocodile::Crocodile(int numOfEggs){
	Oviparous();
	this->subType = "Crocodile";
	this->setNumOfEggs(numOfEggs);
}
