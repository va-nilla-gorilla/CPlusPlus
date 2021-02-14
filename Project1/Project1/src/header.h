/*
 * Description: Project One
 * Description: header.h
 * Description:
 * Description:
 *
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream> 	// Header that defines the standard input/output stream objects
#include <ios> 			// Header providing base classes and types for the IOStream hierarchy of classes
#include <iomanip> 		// Header providing parametric manipulators
#include <string> 		// string header for: string someString = "words";
#include <ctime> 		// Header file to get and manipulate date and time information

// Function declarations
void clockDisplay(int& hour, int& min, int& sec);
void userMenu();
void optStatement();
void addHour(int& hour, int& min, int& sec);
void addMin(int& hour, int& min, int& sec);
void addSec(int& hour, int& min, int& sec);
void clrScreen();
void invalidStatement();
void exitStatement();

#endif /* HEADER_H_ */
