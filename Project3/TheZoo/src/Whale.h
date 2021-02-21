/*
 * Description: Project Three
 * Description: Whale.h
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
#ifndef WHALE_H_
#define WHALE_H_

#include "Mammal.h"
// Class declaration that extends mammal class
class Whale: public Mammal {
	// Public memebers
	public:
		Whale();
		Whale(int nurse);
};
#endif /* WHALE_H_ */
