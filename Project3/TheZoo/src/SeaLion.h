/*
 * Description: Project Three
 * Description: SeaLion.h
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
#ifndef SEALION_H_
#define SEALION_H_

#include "Mammal.h"
//Inherits Oviparous which inherits Animal
class SeaLion: public Mammal {
	// Public members
	public:
		SeaLion();
		SeaLion(int nurse);
};
#endif /* SEALION_H_ */
