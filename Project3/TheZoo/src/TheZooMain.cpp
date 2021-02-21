/*
 * Description: Project Three
 * Description: TheZooMain.cpp
 * Description: Minimal Code in Main Function
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
#include "TheZoo.h"
// Main function
int main() {
	// Calling main menu function
	DisplayMenu();
	// Created user selection variable
	unsigned char selection;
	// Taking user input
	std::cin >> selection;
	// While loop to allow for menu iteration
	while (selection != 7) {
		// Switch statement to allow for user selection
		// Allows for error/exception handling when non-char input is presented
		switch (selection) {
		case '1':
			LoadDataFromFile();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '2':
			GenerateData();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '3':
			DisplayAnimalData();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '4':
			AddAnimalRecord();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '5':
			RemoveAnimal();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '6':
			SaveDataToFile();
			DisplayMenu();
			std::cin >> selection;
			break;
		case '7':
			std::cout << "Exiting Wildlife Zoo Interface. . .\n\n";
			exit(0);
		// Default case for error/exception handling within main menu selection
		default:
			std::cout << "Unknown Error Occurred. . .\nExiting Interface.\n\n";
			exit(0);
		}
	}
	return 1;
}
