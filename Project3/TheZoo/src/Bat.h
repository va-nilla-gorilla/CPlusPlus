/*
 * Description: Project Three
 * Description: Bat.h
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
#ifndef BAT_H_
#define BAT_H_
//Inherits Mammal which inherits Animal
#include "Mammal.h"

// Class declaration extending mammal class
class Bat: public Mammal {
	// Public members
	public:
		Bat();
		Bat(int nurse);
};
#endif /* BAT_H_ */
