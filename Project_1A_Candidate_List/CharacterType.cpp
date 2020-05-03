/*
		TeamName
		 Iacob, Marius (TTh 6:30)
		 Catillio, Edgar (TTh 6:30)

		 Sunday, May 3, 2020

		 CS A250
		 Project 1 - Part A
*/

#include "CharacterType.h"

using namespace std;

// Implement all functions in the SAME order
// as listed in the interface file.

// Default constructor
CharacterType::CharacterType()
{
	id = 0;
}

// Overloaded constructor
CharacterType::CharacterType(string lastN, string firstN, int ID)
{
	lastName = lastN;
	firstName = firstN;
	id = ID;
}

// setCharacterInfo Function
void CharacterType::setCharacterInfo(string lName, string fName, int ID)
{
	lastName = lName;
	firstName = fName;
	id = ID;
}

// Getters Functions
string CharacterType::getFirstName()
{
	return firstName;
}
string CharacterType::getLastName()
{
	return lastName;
}
int CharacterType::getID()
{
	return id;
}

// Printing Functions
void CharacterType::printName() const
{
	cout << getlastName() << ", " << getFirstName();
}
void CharacterType::printCharacterInfo() const 
{
	cout << "ID# " << printID() << getFirstName()
		<< " " << getLastName();
}
void CharacterType::printID() const
{
	cout << "ID# " << getID();
}

// Destructor
CharacterType::~CharacterType(){}