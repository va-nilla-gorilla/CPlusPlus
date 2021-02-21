/*
 * Description: Project Three
 * Description: Mammal.h
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
#ifndef MAMMAL_H_
#define MAMMAL_H_
//Inherits  Animal
#include "Animal.h"


// Class declaration extending Animal class
class Mammal : public Animal{

	// Public members
	public:
		int nurse;
		string subType;
		// Default constructor prototype
		Mammal();
		// Constructor w/ parameter prototype
		Mammal(int tempNurse);

		string getType();
		string getSubType();


		int getNurse();
		// Mutator prototype
		void setNurse(int nurse);
		// Display function
		void Print();
};
#endif /* MAMMAL_H_ */
