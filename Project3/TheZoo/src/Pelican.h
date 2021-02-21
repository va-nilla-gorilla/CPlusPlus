/*
 * Description: Project Three
 * Description: Pelican.h
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
#ifndef PELICAN_H_
#define PELICAN_H_
//Inherits Oviparous which inherits Animal
#include "Oviparous.h"

class Pelican: public Oviparous {
	// Public members
	public:
		Pelican();
		Pelican(int numOfEggs);
};
#endif /* PELICAN_H_ */
