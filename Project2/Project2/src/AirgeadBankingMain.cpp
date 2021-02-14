/*
 * Description: Project Two
 * Description: AirgeadBankingMain.cpp
 * Description:
 * Description:
 *
 * Class: CS-210-T3188
 * Author: Uriah L.Fadum
 * VM Author ID: 1586472_snhu
 * Instructor: Linda Noss
 * Created on: Dec 26, 2020
 * Due Date: Feb 7, 2021
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
// Main function
int main() {
	// Declaring choice variable
	char userChoice;
	// While loop to handle application iteration
	while (true) {
		// Instance variable declaration
		float initInvestAmount;
		float monthlyDeposit;
		float annualInterestRate;
		int numYears;
		// Calling function
		t_mainDisplay_A();
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_contStatement();
		// Calling function
		t_userInitInvestAmnt();
		// Taking user input
		std::cin >> initInvestAmount;
		// Condition to verify non-negative number
		int isdigit(int ch);
		if ((!std::cin) || (initInvestAmount < 0)) {
			// Outputting error statement
			std::cout << "Invalid Entry. . .\n\n";
			// Calling exit function
			t_exitStatement();
		}
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_userRequest();
		// Calling function
		t_userMonthlyDep();
		// Taking user input
		std::cin >> monthlyDeposit;
		// Condition to verify non-negative number
		if ((!std::cin) || (monthlyDeposit < 0)) {
			// Outputting error statement
			std::cout << "Invalid Entry. . .\n\n";
			// Calling exit function
			t_exitStatement();
		}
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_userRequest();
		// Calling function
		t_userAnnualIntRate();
		// Taking user input
		std::cin >> annualInterestRate;
		// Condition to verify non-negative number and an interest rate larger than 24%
		if ((!std::cin) || (annualInterestRate < 0) || (annualInterestRate > 24)) {
			// Outputting error statement
			std::cout << "Invalid Entry. . .\n\n";
			// Calling exit function
			t_exitStatement();
		}
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_userRequest();
		// Calling function
		t_userNumYears();
		// Taking user input
		std::cin >> numYears;
		// Condition to verify non-negative number
		if ((!std::cin) || (numYears < 0) || (numYears > 100)) {
			// // Outputting error statement
			std::cout << "Invalid Entry. . .\n\n";
			// Calling exit function
			t_exitStatement();
		}
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_mainDisplay_B();
		// Setting fixed precision of 2 decimal points
		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		// Outputting titles w/ data
		std::cout << "Initial Investment Amount: $" << initInvestAmount << std::endl;
		std::cout << "Monthly Deposit: $" << monthlyDeposit << std::endl;
		// Setting back precision to 0 for proper output of years
		std::cout << std::setprecision(0);
		std::cout << "Annual Interest: %" << annualInterestRate << std::endl;
		std::cout << "Number of Years: " << numYears << std::endl;
		// Calling function
		t_contStatement();

		t_clrScreen();
		// Calling function
		t_printReport_A();
		// Calling function w/ parameters
		t_calculateInt_A(initInvestAmount, monthlyDeposit, annualInterestRate, numYears);
		// Outputting new line
		std::cout << std::endl;
		// Calling function
		t_printReport_B();
		// Calling function w/ parameters
		t_calculateInt_B(initInvestAmount, monthlyDeposit, annualInterestRate, numYears);
		// New line X2
		std::cout << "\n\n";
		// Asking user to test different amounts
		std::cout << "Would you like to test a different scenario?\n\n";
		// Outputting directions
		std::cout << "Y - Yes\nN - No\n\n";
		// Taking user input
		std::cin >> userChoice;
		// Condition to verify user input
		if (userChoice == 'y' || userChoice == 'Y') {
			t_clrScreen();
			continue;
		}
		// Exiting program
		else {
			t_clrScreen();
			t_exitStatement();
		}
	}
	// Returning successful program completion
	return 0;
}
