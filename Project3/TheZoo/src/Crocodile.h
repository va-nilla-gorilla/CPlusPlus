/*
 * Description: Project Three
 * Description: Crocodile.h
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
#ifndef CROCODILE_H_
#define CROCODILE_H_

#include "Oviparous.h"

// Class declaration that extends oviparous class
class Crocodile: public Oviparous {
	// Public members
	public:
		Crocodile();
		Crocodile(int numOfEggs);
};
#endif /* CROCODILE_H_ */
