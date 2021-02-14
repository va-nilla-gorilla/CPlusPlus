/*
 * Description: Project Two
 * Description: AirgeadBanking.h
 * Description:
 * Description:
 */

#ifndef AIRGEADBANKING_H_
#define AIRGEADBANKING_H_

#include <iostream> 	// Header that defines the standard input/output stream objects
#include <sstream>
#include <ios> 			// Header providing base classes and types for the IOStream hierarchy of classes
#include <iomanip> 		// Header providing parametric manipulators
#include <string> 		// string header for: string someString = "words";
// Function Declaration
void t_printReport_A();
void t_printReport_B();
void t_mainDisplay_A();
void t_mainDisplay_B();
void t_userRequest();
void t_userInitInvestAmnt();
void t_userMonthlyDep();
void t_userAnnualIntRate();
void t_userNumYears();
void t_contStatement();
void t_clrScreen();
void t_exitStatement();
void t_calculateInt_A(float& initAmt, float& depAmt, float& intRate, int& numYears);
void t_calculateInt_B(float& initAmt, float& depAmt, float& intRate, int& numYears);

#endif /* AIRGEADBANKING_H_ */
