/*
 * Description: Project Three
 * Description: Goose.h
 * Description:
 * Description:
 *
 * Class: CS-210-T3188
 * Author: Uriah L.Fadum
 * VM Author ID: 1586472_snhu
 * Instructor: Linda Noss
 * Created on: Feb 12, 2021
 * Due Date: Feb 21, 2021
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
