/*
 * Description: Project Three
 * Description: Pelican.cpp
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
#include "Pelican.h"
// Default constructor
Pelican::Pelican() {

	Oviparous();
	this->subType = "Pelican";
}
// Constructor w/ parameter
Pelican::Pelican(int numOfEggs){
	Oviparous();
	this->subType = "Pelican";
	this->setNumOfEggs(numOfEggs);
}
