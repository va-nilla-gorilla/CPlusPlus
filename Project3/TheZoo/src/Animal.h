/*
 * Description: Project Three
 * Description: Animal.h
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
#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;
// Class Declaration
class Animal {
	// Private members
	private:
		string name;
		int trackNum;
	// Public members
	public:
		 //Constructor
		Animal();
		//Destructor
		virtual ~Animal();

		string type;
		string subType;

		// Accessor prototypes
		string getName();
		int getTrackNum();
		string getType();
		string getSubType();

		//virtual functions to look at subclasses and return data
		virtual int getNumOfEggs();
		virtual int getNurse();
		// Mutator prototypes
		void setName(string name);
		void setTrackNum(int trackNum);
		// Virtual functions to look at subclass and return data
		virtual void setNumOfEggs(int numOfEggs);
		virtual void setNurse(int nurse);
		// Virtual display function to look at subclasses display function
		virtual void Print() {

		};
};
#endif /* ANIMAL_H_ */
