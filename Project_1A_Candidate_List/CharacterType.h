/*
		TeamName
		 Iacob, Marius (TTh 6:30)
		 Catillio, Edgar (TTh 6:30)

		 Sunday, May 3, 2020

		 CS A250
		 Project 1 - Part A
*/

#ifndef CHARACTERTYPE_H
#define CHARACTERTYPE_H

#include <iostream>
#include <string>

class CharacterType
{
public:
	// Default constructor
	CharacterType();
  		
	// Overloaded constructor
	CharacterType(std::string firstName, std::string lastName, int id);
	
	// setCharacterInfo Function
	void setCharacterInfo(std::string fName, std::string lName, int ID);
		
	// Getters Functions
	std::string getFirstName();
	std::string getlastName();
	int getID();

	// Printing Functions
	void printName();
	void printCharacterInfo();
	void printID();

	// Destructor
	~CharacterType();

private:
	std::string firstName;	
	std::string lastName;	
	int id;					
};

#endif 

