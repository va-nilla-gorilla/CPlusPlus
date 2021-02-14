/*
 * Description: Project One
 * Description: Clocks.cpp
 * Description:
 * Description:
 *
 */

// Shows 80 Char width & also helps separate code for readability
//---------------------------->80  CHAR WIDTH<--------------------------------//


/*******************************************************************\
 *  All code has been edited for readability, adding whitespace,   *
 *  proper indentation and applying style guidelines and best      *
 *  practices throughout                                           *
\*******************************************************************/

// Including user defined header file
#include "header.h"

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Using standard name space
using namespace std;

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Main method
int main() {
	// Returns current number of seconds since January 1, 1970 (Epoch)
	time_t dateTimeyear = time(0);
	// Converting time to local time
	tm *tm_local = localtime(&dateTimeyear);
	// Hour variable that points to hour
	int hour = tm_local->tm_hour;
	// Minute variable that points to minute
	int min = tm_local->tm_min;
	// Second variable that points to second
	int sec = tm_local->tm_sec;
	// Calling clockDisplay function w/ parameters
	clockDisplay(hour, min, sec);
	// Calling optStatement function
	optStatement();
	// Calling userMenu function
	userMenu();
	// Variable for user input
	char userInput;
	// Taking in user input
	cin >> userInput;

//---------------------------->80  CHAR WIDTH<--------------------------------//

	// Loop to control the display of the clock & take user input
	while (true) {
		// Condition to handle user input of 1
		switch(userInput) {

		case '1':
			// Calling add hour function
			addHour(hour, min, sec);
			// Flush the output stream
			cout.flush();
			// Calling clear screen function
			clrScreen();
			// Calling clock display function w/ updated time
			clockDisplay(hour, min, sec);
			// Calling option statement function
			optStatement();
			// Calling user menu function
			userMenu();
			// Taking user input
			cin >> userInput;
			break;

//---------------------------->80  CHAR WIDTH<--------------------------------//

		// Condition to handle user input of 2
		case '2':
			// Calling add minute function
			addMin(hour, min, sec);
			// Flush the output stream
			cout.flush();
			// Calling clear screen function
			clrScreen();
			// Calling clock display function w/ updated time
			clockDisplay(hour, min, sec);
			// Calling option statement function
			optStatement();
			// Calling user menu function
			userMenu();
			// Taking user input
			cin >> userInput;
			break;


//---------------------------->80  CHAR WIDTH<--------------------------------//

		// Condition to handle user input of 3
		case '3':
			// Calling add second function
			addSec(hour, min, sec);
			// Flush the output stream
			cout.flush();
			// Calling clear screen function
			clrScreen();
			// Calling clock display function w/ updated time
			clockDisplay(hour, min, sec);
			// Calling option statement function
			optStatement();
			// Calling user menu function
			userMenu();
			// Taking user input
			cin >> userInput;
			break;


//---------------------------->80  CHAR WIDTH<--------------------------------//

		// Condition to handle user input of 4
		case '4':
			// Flush the output stream
			cout.flush();
			// Calling clear screen function
			clrScreen();
			// Calling exit statement
			exitStatement();
			// Successful program termination
			exit(0);
		// Default condition to handle exceptions during selection
		default:
			// Flush the output stream
			cout.flush();
			// Calling clear screen function
			clrScreen();
			// Calling invalid statement
			invalidStatement();
			// Calling clock display function
			clockDisplay(hour, min, sec);
			// Calling option statement function
			optStatement();
			// Calling user menu function
			userMenu();
			// Taking user input
			cin >> userInput;
		}
	}
	// Returning successful program completion
	return 0;
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// --->COULD CONDENSE CODE DOWN HERE<---
// Clock display function
void clockDisplay(int& hour, int& min, int& sec) {
	// Local variable to store 12hr data
	int hour12;
	// Display graphic
	cout << setfill('*') << setw(27) << "" << "    ";
	// Display graphic
	cout << setfill('*') << setw(27) << "" << endl;
	// Display graphic & clock titles
	cout << "*      12-Hour Clock      *    *      24-Hour Clock      *" << endl;
	// Display graphic
	cout << "*      ";
	// Conditions to add data for 12hr clock for correct display
	switch(hour) {

	case 13: hour12 = 1; break;		// Sets hour12 variable to 1
	case 14: hour12 = 2; break;		// Sets hour12 variable to 2
	case 15: hour12 = 3; break;		// Sets hour12 variable to 3
	case 16: hour12 = 4; break;		// Sets hour12 variable to 4
	case 17: hour12 = 5; break;		// Sets hour12 variable to 5
	case 18: hour12 = 6; break;		// Sets hour12 variable to 6
	case 19: hour12 = 7; break;		// Sets hour12 variable to 7
	case 20: hour12 = 8; break;		// Sets hour12 variable to 8
	case 21: hour12 = 9; break;		// Sets hour12 variable to 9
	case 22: hour12 = 10; break;	// Sets hour12 variable to 10
	case 23: hour12 = 11; break;	// Sets hour12 variable to 11
	case 00: hour12 = 12; break;	// Sets hour12 variable to 12
	}
	// Condition to set hour12 to hour(24hr clock)
	if (hour < 13) hour12 = hour;
	// Condition to set hour12 variable to 12 when clock 24hr clock rolls to 00:XX:XX
	if (hour == 0) hour12 = 12;
	// Condition to add a 0 to beginning of hour
	if (hour12 < 10) cout << "0";
	// Displays HH:
	cout << hour12  << ":";
	// Condition to add a 0 to beginning of minute
	if (min < 10) cout << "0";
	// Displays MM:
	cout << min << ":";
	// Condition to add a 0 to beginning of second
	if (sec < 10) cout << "0";
	// Displays SS
	cout << sec;
	// Condition to display A M after seconds
	if (hour < 12) cout << " A M";
	// Condition to display P M after seconds
	if (hour >= 12) cout << " P M";
	// Display graphic
	cout << "       *    *        ";
	// Condition to add a 0 to beginning of hour
	if (hour < 10) cout << "0";
	// Displays HH:
	cout << hour << ":";
	// Condition to add a 0 to beginning of minute
	if (min < 10) cout << "0";
	// Displays MM:
	cout << min << ":";
	// Condition to add a 0 to beginning of second
	if (sec < 10) cout << "0";
	// Display graphic
	cout << sec << "         *" << endl;
	// Display graphic
	cout << setfill('*') << setw(27) << "" << "    ";
	// Display graphic
	cout << setfill('*') << setw(27) << "" << endl;
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical user interface function
void userMenu() {
	// Display graphic
	cout << setfill('*') << setw(27) << ""
		 << "    " << setfill('*') << setw(27) << "" << endl;
	// Display graphic w/ selection 1
	cout << "* 1 - Add One Hour        *"
		 << "    *" << setfill(' ') << setw(25) << "" << "*" << endl;
	// Display graphic w/ selection 2
	cout << "* 2 - Add One Minute      *"
		 << "    *" << setfill(' ') << setw(25) << "" << "*" << endl;
	// Display graphic w/ selection 3
	cout << "* 3 - Add One Second      *"
		 << "    *" << setfill(' ') << setw(25) << "" << "*" << endl;
	// Display graphic w/ selection 4
	cout << "* 4 - Exit Program        *"
		 << "    *" << setfill(' ') << setw(25) << "" << "*" << endl;
	// Display graphic
	cout << setfill('*') << setw(27)
		 << "" << "    " << setfill('*') << setw(27) << "" << endl;
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical user statement function
void optStatement() {
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "  \n";
	// Display graphic
	cout << setw(18) << setfill(' ') << left << "*";
	// Display statement
	cout << "Please Select An Option";
	// Display graphic
	cout << setw(18) << setfill(' ') << right << "*\n";
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "    ";
	// Display newline
	cout << endl;

}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Function to add hour
void addHour(int& hour, int& min, int& sec) {
	// Condition to handle hour if at clock max
	if (hour == 23) {

		// Changes hour to 0
		hour = 0;
	}
	// Condition to add hour
	else {
		// Add hour
		hour++;
	}
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Function to add minute
void addMin(int& hour, int& min, int& sec) {
	// Condition to handle minute if at clock max
	if (min == 59) {

		// Changes minute to 0
		min = 0;
		// Condition to handle hour if at clock max
		if (hour == 23) {

			// Change hour to 0
			hour = 0;
		}
		// Condition to add hour
		else {
			// Add hour
			hour++;
		}
	}
// Condition to add minute
	else {
	// Add minute
	min++;
	}
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Function to add second
void addSec(int& hour, int& min, int& sec) {
	// Condition to handle hour, minute and second if all at clock max
	if ((sec == 59) && (min == 59) && (hour == 23)) {
		// Change seconds to 0
		sec = 0;
		// Change minutes to 0
		min = 0;
		// Change hours to 0
		hour = 0;
	}
	// Condition to handle hour if minute and seconds at clock max
	else if ((sec == 59) && (min == 59) && (hour != 23)) {

		// Change seconds to 0
		sec = 0;
		// Change minutes to 0
		min = 0;
		// Adds hour
		hour++;
	}
	// Condition to handle minute if seconds at clock max
	else if ((sec == 59) && (min != 59)) {
		// Change second to 0
		sec = 0;
		// Adds minute
		min++;
	}
// Condition to add second
	else {
		// Add second
		sec++;
	}
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Clear screen function
void clrScreen() {
	// Clears screen & IS NOT OS DEPENDENT
	// Down side is that it outputs towards bottom of console
	// LOOK INTO USING CURSES FOR REPLACEMENT
	cout << string( 100, '\n' ) << flush;
}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical invalid statement function
void invalidStatement() {
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "  \n";
	// Display graphic
	cout << setw(18) << setfill(' ') << left << "*";
	// Display statement
	cout << "Invalid selection...";
	// Display graphic
	cout << setw(21) << setfill(' ') << right << "*\n";
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "    ";
	// Display newline
	cout << endl;

}

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical exit statement function
void exitStatement() {
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "  \n";
	// Display graphic
	cout << setw(18) << setfill(' ') << left << "*";
	// Display statement
	cout << "Exiting program...";
	// Display graphic
	cout << setw(23) << setfill(' ') << right << "*\n";
	// Display graphic
	cout << setfill('*') << setw(58) << "" << "    ";
	// Display newline
	cout << endl;
}
