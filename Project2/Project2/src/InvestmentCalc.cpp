/*
 * Description: Project Two
 * Description: InvestmentCalc.cpp
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
#include "AirgeadBanking.h"
// Spreadsheet A
void t_printReport_A() {
	std::cout << "     Balance and Interest Without Additional Monthly Deposits" << std::endl;
	std::cout << std::setfill('=') << std::setw(63) << "" << std::endl;
	std::cout << "  Year\t\tYear End Balance     Year End Earned Interest" << std::endl;
	std::cout << std::setfill('-') << std::setw(63) << "" << std::endl;
}
// Spreadsheet B
void t_printReport_B() {
	std::cout << "        Balance and Interest With Additional Monthly Deposits" << std::endl;
	std::cout << std::setfill('=') << std::setw(63) << "" << std::endl;
	std::cout << "  Year\t\tYear End Balance     Year End Earned Interest" << std::endl;
	std::cout << std::setfill('-') << std::setw(63) << "" << std::endl;
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical user interface function
void t_mainDisplay_A() {
	std::cout << std::setfill('*') << std::setw(34) << "" << std::endl;
	std::cout << std::setfill('*') << std::setw(10) << "" << " Data Input "
			  << std::setfill('*') << std::setw(12) << "" << std::endl;
	std::cout << "Initial Investment Amount: \n";
	std::cout << "Monthly Deposit: \n";
	std::cout << "Annual Interest: \n";
	std::cout << "Number of Years: \n";
}
// Graphical user interface function
void t_mainDisplay_B() {
	std::cout << std::setfill('*') << std::setw(34) << "" << std::endl;
	std::cout << std::setfill('*') << std::setw(10) << "" << " Data Input "
			  << std::setfill('*') << std::setw(12) << "" << std::endl;
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// User request function
void t_userRequest() {
	std::cout << "Please enter...\n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical function
void t_userInitInvestAmnt() {
	// Display graphic w/ selection 1
	std::cout << "Initial Investment Amount: \n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical function
void t_userMonthlyDep() {
	// Display graphic w/ selection 2
	std::cout << "Monthly Deposit: \n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical function
void t_userAnnualIntRate() {
	// Display graphic w/ selection 3
	std::cout << "Annual Interest: \n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Graphical function
void t_userNumYears() {
	// Display graphic w/ selection 4
	std::cout << "Number of Years: \n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// System pause function
void t_contStatement() {
//ADDRESSES THE CROSS-PLATFORM ISSUE
// System pause for APPLE/LINUX OS
#if defined(__APPLE__) || defined(__linux__)
		system("read -n 1 -s -p \"Press enter to continue...\"" );
// System pause for WINDOWS OS
#elif defined(_WIN32)
		system("PAUSE");
#endif
}
// Interest calculation A function
void t_calculateInt_A(float& initAmt, float& depAmt, float& intRate, int& numYears) {
	float totalAmt = initAmt;
	for (int i = 0; i < numYears; i++) {
		float intAmt = (totalAmt) * (intRate / 100);
		totalAmt = totalAmt + intAmt;
		std::cout << std::setfill(' ') << std::setw(6) <<  (i + 1) << std::setfill(' ')
				  << std::setw(26) << std::fixed << std::setprecision(2) << totalAmt
				  << "\t\t\t$" << intAmt << "\n\n";
	}
}
// Interest calculation B function
void t_calculateInt_B(float& initAmt, float& depAmt, float& intRate, int& numYears) {
	float totalAmt = initAmt;
	for (int i = 0; i < numYears; i++) {
		float yearTotInt = 0.0;
		for (int j = 0; j < 12; j++) {
			float intAmt = (totalAmt + depAmt) * ((intRate / 100) / 12);
			yearTotInt = yearTotInt + intAmt;
			totalAmt = totalAmt + depAmt + intAmt;
		}
		// Outputting iteration w/ data
		std::cout << std::setfill(' ') << std::setw(6) <<  (i + 1) << std::setfill(' ')
				  << std::setw(26) << std::fixed << std::setprecision(2) << totalAmt
				  << "\t\t\t$" << yearTotInt << "\n\n";
	}
}
// Clear screen function
void t_clrScreen() {
	// Clears screen & IS NOT OS DEPENDENT
	// Down side is that it outputs towards bottom of console
	// LOOK INTO USING CURSES FOR REPLACEMENT
	std::cout << std::string(50, '\n' ) << std::flush;
}
// Exit function
 void t_exitStatement() {
	 std::cout << std::setfill(' ') << std::setw(0) << "";
	 std::cout << std::setfill('-') << std::setw(57) << "";
	 std::cout << std::setfill(' ') << std::setw(0)<< "" << "\n";
	 std::cout << "| Thank you for using AirGead Investment Calculator 1.0 |\n";
	 std::cout << std::setfill(' ') << std::setw(0) << "";
	 std::cout << std::setfill('-') << std::setw(57) << "";
	 std::cout << std::setfill(' ') << std::setw(0)<< "" << "\n";
	 exit(0);
 }
