/*
 * Description: Project Three
 * Description: TheZoo.cpp
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

//FIXME WHEN ZOODATA.TXT FILE IS ADDED TO VECTOR W/ MULTIABLE DATA, IT PRINTS LAST ENTRY TWICE WHEN DISPLAY ANIMAL FUNCTION IS CALLED

//---------------------------->80  CHAR WIDTH<--------------------------------//

// User defined header file containing all relative Declarations & Inclusions
#include "TheZoo.h"

void GenerateData()               //DO NOT TOUCH CODE IN THIS METHOD
{
     JavaVM *jvm;                      // Pointer to the JVM (Java Virtual Machine)
     JNIEnv *env;                      // Pointer to native interface
     //================== prepare loading of Java VM ============================
     JavaVMInitArgs vm_args;                        // Initialization arguments
     JavaVMOption* options = new JavaVMOption[1];   // JVM invocation options
     options[0].optionString = (char*) "-Djava.class.path=";   // where to find java .class
     vm_args.version = JNI_VERSION_1_6;             // minimum Java version
     vm_args.nOptions = 1;                          // number of options
     vm_args.options = options;
     vm_args.ignoreUnrecognized = false;     // invalid options make the JVM init fail
     //=============== load and initialize Java VM and JNI interface =============
     jint rc = JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);  // YES !!
     delete options;    // we then no longer need the initialization options.
     if (rc != JNI_OK) {
            // TO DO: error processing...
    	 std::cin.get();
            exit(EXIT_FAILURE);
     }
     //=============== Display JVM version =======================================
     std::cout << "JVM load succeeded: Version ";
     jint ver = env->GetVersion();
     std::cout << ((ver >> 16) & 0x0f) << "." << (ver & 0x0f) << std::endl;

     jclass cls2 = env->FindClass("ZooFileWriter");  // try to find the class
     if (cls2 == nullptr) {
            cerr << "ERROR: class not found !";
     }
     else {                                  // if class found, continue
    	 std::cout << "Class MyTest found" << std::endl;
            jmethodID mid = env->GetStaticMethodID(cls2, "createZooFile", "()V");  // find method
            if (mid == nullptr)
                   cerr << "ERROR: method void createZooFile() not found !" << std::endl;
            else {
                   env->CallStaticVoidMethod(cls2, mid);                      // call method
                   std::cout << std::endl;
            }
     }


     jvm->DestroyJavaVM();
     std::cin.get();
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Vector object to hold animal data in memory
vector<Animal*> animalList;

//---------------------------->80  CHAR WIDTH<--------------------------------//

// Custom create animal function to allow for code redundancies
Animal* createAnimal(int trackNum, string name, string type,
					 string subType, int numOfEggs, int isNursing) {
	// Condition to check type
	if (type == "Mammal") {
		// Condition to check sub-type
		if (subType == "Bat") {
			Bat* bat_1 = new Bat(isNursing);
			bat_1->setTrackNum(trackNum);
			bat_1->setName(name);
			bat_1->type = "Mammal";
			bat_1->subType = "Bat";
			bat_1->setNumOfEggs(0);
			bat_1->setNurse(isNursing);
			return bat_1;
		}
		// Condition to check sub-type
		else if (subType == "Whale") {
			Whale* whale_1 = new Whale(isNursing);
			whale_1->setTrackNum(trackNum);
			whale_1->setName(name);
			whale_1->type = "Mammal";
			whale_1->subType = "Whale";
			whale_1->setNumOfEggs(0);
			whale_1->setNurse(isNursing);
			return whale_1;
		}
		// Condition to check sub-type
		else if (subType == "SeaLion") {
			SeaLion* seaLion_1 = new SeaLion(isNursing);
			seaLion_1->setTrackNum(trackNum);
			seaLion_1->setName(name);
			seaLion_1->type = "Mammal";
			seaLion_1->subType = "SeaLion";
			seaLion_1->setNumOfEggs(0);
			seaLion_1->setNurse(isNursing);
			return seaLion_1;
		}
	}
	// Condition to check type
	else {
		if (type == "Oviparous") {
			// Condition to check sub-type
			if (subType == "Crocodile") {
				Crocodile* crocodile_1 = new Crocodile(numOfEggs);
				crocodile_1->setTrackNum(trackNum);
				crocodile_1->setName(name);
				crocodile_1->type = "Oviparous";
				crocodile_1->subType = "Crocodile";
				crocodile_1->setNumOfEggs(numOfEggs);
				crocodile_1->setNurse(0);
				return crocodile_1;
			}
			// Condition to check sub-type
			else if (subType == "Goose") {
				Goose* goose_1 = new Goose(numOfEggs);
				goose_1->setTrackNum(trackNum);
				goose_1->setName(name);
				goose_1->type = "Oviparous";
				goose_1->subType = "Goose";
				goose_1->setNumOfEggs(numOfEggs);
				goose_1->setNurse(0);
				return goose_1;
			}
			// Condition to check sub-type
			else if (subType == "Pelican") {
				Pelican* pelican_1 = new Pelican(numOfEggs);
				pelican_1->setTrackNum(trackNum);
				pelican_1->setName(name);
				pelican_1->type = "Oviparous";
				pelican_1->subType = "Pelican";
				pelican_1->setNumOfEggs(numOfEggs);
				pelican_1->setNurse(0);
				return pelican_1;
			}
		}
	}
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Add record function
void AddAnimalRecord() {
	// Instance variables
	int trackNum_1;
	string name_1;
	string type_1;
	string subType_1;
	int numOfEggs_1;
	int isNursing_1;

	// Outputting directions & taking user input
	std::cout << "Track Number: \n";
	// throws exception for non-integer input
	std::cin.exceptions(ios_base::failbit);

	try {
		// Taking user input
		std::cin >> trackNum_1;
		// Condition to verify valid track number
		if (trackNum_1 < 0 || trackNum_1 > 999999) {
			std::cout << "Invalid Track Number. . .\nExiting interface.\n\n";
			exit(0);
		}
	// Catching non-integer input w/ exception message
	}catch(const ios_base::failure& e) {
		std::cout << "Invalid entry. . .\nExiting function\n\n";
	    return;
	}
	std::cout << "Enter Animal Name: \n";
	std::cin >> name_1;
	// Verifying data
	if (name_1.length() < 2 || name_1.length() > 15) {
		std::cout << "Invalid name length. . .\nExiting function.\n\n";
		return;
	}
	else if (name_1.empty()) {
		std::cout << "Invalid input. . .\nExiting function.\n\n";
		return;
	}
	std::cout << "Enter Animal Type: \n";
	std::cin >> type_1;
	// Verifying data
	if (type_1.length() < 0 || type_1.length() > 15) {
		std::cout << "Invalid input. . .\nExiting function.\n\n";
		return;
	}
	std::cout << "Enter Animal Sub-type: \n";
	std::cin >> subType_1;
	// Verifying data
	if (subType_1.length() < 2 || subType_1.length() > 15) {
		std::cout << "Invalid input. . .\nExiting function.\n\n";
		return;
	}
	else if (subType_1.empty()) {
		std::cout << "Invalid input. . .\nExiting function.\n\n";
		return;
	}
	std::cout << "Enter Number of Eggs: \n";
	try {
		// Taking user input
		std::cin >> numOfEggs_1;
		// Verifying data
		// 60 is the max amount of eggs produced by crocodile
		// Have to change if sea-turtle is ever added! 110 is sea-turtle max!
		if (numOfEggs_1 < 0 || numOfEggs_1 > 60) {
			std::cout << "Invalid input. . .\nExiting function.\n\n";
			return;
		}
		// Catching non-integer input w/ exception message
	}catch(const ios_base::failure& e) {
			std::cout << "Invalid input. . .\nExiting function\n\n";
		    return;
	}
	std::cout << "Enter 1 if Nursing, 0 if not: \n";
	try {
		// Taking user input
		std::cin >> isNursing_1;
			// Verifying data
			if (isNursing_1 < 0 || isNursing_1 > 1) {
				std::cout << "Invalid input. . .\nExiting function.\n\n";
				return;
			}
			// Catching non-integer input w/ exception message
		}catch(const ios_base::failure& e) {
				std::cout << "Invalid input. . .\nExiting function\n\n";
			    return;
		}
	// Creating animal w/ user inputed data
	Animal* animal_1 = createAnimal(trackNum_1, name_1, type_1,
							subType_1, numOfEggs_1, isNursing_1);

	// Verifying whether to add record
	std::cout << "Would you like to add this record?\n";
	char confermation;
	std::cout << "(Y) - Yes\n(N) - No\n";
	std::cin >> confermation;
	// Condition to handle upper && lower case input of "Yes"
	if (confermation == 'Y' || confermation == 'y') {
		animalList.push_back(animal_1);
		std::cout << "Animal successfully added. . .\n\n";
	}
	// Condition to verify exiting add animal function or re-entering new animal
	else {
		std::cout << "Would you like to enter another record?\n";
		std::cout << "(Y) - Yes\n(N) - No\n";
		std::cin >> confermation;
		switch (confermation) {
		case 'Y':
			AddAnimalRecord();
			break;
		case 'y':
			AddAnimalRecord();
			break;
		case 'N':
			break;
		case 'n':
			break;
		}
	}
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Remove animal function
void RemoveAnimal() {
	   string track_num;
	   std::cout << "Enter the Tracking Number to remove animal data:\n";
	   std::cin >> track_num;
	   // Loop to iterate through track number
	   for (unsigned int i = 0; i < track_num.length(); i++){
		   // Verifying track number specifications
		   if (!isdigit(track_num[i]) || track_num.length() > 6 || track_num.length() < 6) {
			   std::cout << track_num << " is not a valid input. . .\nExiting function\n\n";
			   return;
		   }
	   }
	   // Creating integer type variable, storing the integer form of the string track_num in variable
	   int track_num_2 = stoi(track_num);
	   // Loop to iterate through vector list
	   for(unsigned int i = 0; i < animalList.size(); i++) {
		   // Condition to compare track numbers and erase
	       if(track_num_2 == animalList[i]->getTrackNum()) {
	    	   animalList.erase(animalList.begin() + i);
	    	   std::cout << "Animal successfully deleted. . .\n";
	           return;
	       }
	   }
	   std::cout << "Data does not exist. . .\n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Load data function
void LoadDataFromFile() {
	// Opening zoodata.txt && assigning file data as file_in
	ifstream file_in("zoodata.txt");
	// Instance variables
	int trackNum_2 = -1;
	string name_2;
	string type_2;
	string subType_2;
	int eggs_2;
	int nurse_2;
	// Condition verifying file was opened
	if (!file_in.is_open()) {
		std::cout << "File not found. . .\nExiting function.\n\n";
		return;
	}
	// Condition to manipulate file data
	else {
		// Loop to iterate through file till EOF
		while (!file_in.eof()) {
		file_in >> trackNum_2;
		file_in >> name_2;
		file_in >> type_2;
		file_in >> subType_2;
		file_in >> eggs_2;
		file_in >> nurse_2;
		// Creating animal w/ file_in data
		Animal* animalToLoad = createAnimal(trackNum_2, name_2, type_2, subType_2, eggs_2, nurse_2);
		// Placing animal into vector
		animalList.push_back(animalToLoad);
		}
		// Closing file
		file_in.close();
		std::cout << "Load successful. . .\n\n";
	   }
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Save data function
void SaveDataToFile() {
	// Opening zoodata.txt & storing it in variable file_out
	ofstream file_out("zoodata.txt");
	// Loop to iterate through vector
	for(unsigned int i = 0; i < animalList.size(); i++) {
		// Condition to verify type
	    if(animalList[i]->getType() == "Oviparous") {
	    	// Creating temporary animal w/ type oviparous
	    	Oviparous* tempAnimal = (Oviparous*)animalList[i];
	    	// Outputting animal data
	    	file_out << setw(6) << setfill('0') << tempAnimal->getTrackNum()
	    	   	     << setw(15) << setfill(' ') << tempAnimal->getName()
				     << setw(15) << setfill(' ') << tempAnimal->type
				     << setw(15) << setfill(' ') << tempAnimal->subType
	    	   	     << setw(2) << setfill(' ') << tempAnimal->getNumOfEggs()
	    	   	     << setw(2) << setfill(' ') << tempAnimal->getNurse() << endl;
	    }
	    // Condition to verify type
	    else if (animalList[i]->getType() == "Mammal") {
	    	// Creating temporary animal w/ type mammal
	    	Mammal* tempAnimal = (Mammal*)animalList[i];
	    	// Outputting animal data
	    	file_out << setw(6) << setfill('0') << tempAnimal->getTrackNum()
		             << setw(15) << setfill(' ') << tempAnimal->getName()
				     << setw(15) << setfill(' ') << tempAnimal->type
				     << setw(15) << setfill(' ') << tempAnimal->subType
				     << setw(2) << setfill(' ') << tempAnimal->getNumOfEggs()
				     << setw(2) << setfill(' ') << tempAnimal->getNurse() << endl;
	   }
	}
	// Closing file
	file_out.close();
	std::cout << "Save successfully completed. . .\n\n" << std::endl;
	// Clearing vector
	animalList.clear();
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Display menu Function
void DisplayMenu() {
	std::cout << std::setfill('*') << std::setw(41) << "" << std::endl;
	std::cout << std::setfill('*') << std::setw(1) << ""
			  << " Welcome to the Wildlife Zoo Interface "
			  << std::setfill('*') << std::setw(1) << "" << std::endl;
	std::cout << std::setfill('*') << std::setw(41) << "" << std::endl;
	std::cout << "Enter an option:\n\n"
				 "1: Load Animal Data\n"
				 "2: Generate Data\n"
				 "3: Display Animal Data\n"
				 "4: Add Record\n"
				 "5: Delete Record\n"
				 "6: Save Animal Data\n"
				 "7: Quit\n\nSelection:\n";
}
//---------------------------->80  CHAR WIDTH<--------------------------------//

// Display animal data function
void DisplayAnimalData() {
	std::cout  << std::setfill(' ') <<
	std::setw(0) <<  "Track#" <<
	std::setw(16) << "Name" <<
	std::setw(16) << "Type" <<
	std::setw(16) << "Sub-type" <<
	std::setw(10) << "Eggs" <<
	std::setw(10) << "Nurse\n";
	std::cout << std::setfill('=') << std::setw(75) << "" << std::endl;
	// For loop to iterate through vector
	for (unsigned int i = 0; i < animalList.size(); i++) {
		// Calling Print function for each vector element
	   	animalList[i]->Print();
	}
}
//---------------------------->80  CHAR WIDTH<--------------------------------//
