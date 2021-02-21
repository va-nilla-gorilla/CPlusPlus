/*
 * Description: Project Three
 * Description: Animal.cpp
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
#include "Animal.h"

//Default Constructor
Animal::Animal() {

	this ->name = "none";
	this ->trackNum = 0;
}
// Destructor
Animal::~Animal() {

}
// Accessor
string Animal::getName() {
	return this->name;
}
// Accessor
int Animal::getTrackNum() {
	return this->trackNum;
}
// Accessor
string Animal::getType() {
	return this->type;
}
// Accessor
string Animal::getSubType() {
	return this->subType;
}
// Accessor
int Animal::getNurse() {
	return 0;
}
// Accessor
int Animal::getNumOfEggs() {
	return 0;
}
// Mutator
void Animal::setName(string name){
	this->name = name;
	return;
}
// Mutator
void Animal::setTrackNum(int trackNum){
	this->trackNum = trackNum;
	return;
}
// Mutator
void Animal::setNumOfEggs(int numOfEggs){
	return;
}
// Mutator
void Animal::setNurse(int nurse){
	return;
}
