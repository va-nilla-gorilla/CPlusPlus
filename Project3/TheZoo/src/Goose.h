/*
 * Description: Project Three
 * Description: Goose.h
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
#ifndef GOOSE_H_
#define GOOSE_H_

#include "Oviparous.h"

// Class declaration that extends oviparous class
class Goose: public Oviparous {
	// Public members
	public:
		Goose();
		Goose(int numOfEggs);
};
#endif /* GOOSE_H_ */
