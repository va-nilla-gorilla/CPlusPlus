/*
 * Description: Project Three
 * Description: Oviparous.h
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
#ifndef OVIPAROUS_H_
#define OVIPAROUS_H_
//Inherits  Animal
#include "Animal.h"

// Class declaration extending Animal class
class Oviparous : public Animal {

	// Public members
	public:
		int numOfEggs;
		string subType;
		// Default constructor prototype
		Oviparous();
		// Constructor w/ parameter prototype
		Oviparous(int eggs);

		string getType();
		string getSubType();


		int getNumOfEggs();
		// Mutator prototype
		void setNumOfEggs(int numOfEggs);
		// Display function
		void Print();
};
#endif /* OVIPAROUS_H_ */
