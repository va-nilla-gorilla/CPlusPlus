/*
 * Description: Project Three
 * Description: TheZoo.h
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
#ifndef THEZOO_H_
#define THEZOO_H_

#include <iostream>
#include <jni.h>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
#include <exception>

#include "Animal.h"
// Mammal header
#include "Mammal.h"
// Oviparous header
#include "Oviparous.h"
// Mammal sub-type headers
#include "Bat.h"
#include "Crocodile.h"
#include "Goose.h"
// Oviparous sub-type headers
#include "Pelican.h"
#include "SeaLion.h"
#include "Whale.h"

// Function prototypes
Animal* createAnimal(int, string, string, string, int, int);
void GenerateData();
void AddAnimalRecord();
void RemoveAnimal();
void LoadDataFromFile();
void SaveDataToFile();
void DisplayMenu();
void DisplayAnimalData();

#endif /* THEZOO_H_ */
