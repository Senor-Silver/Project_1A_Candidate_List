/*
		TeamName: OOPS
		 Iacob, Marius (TTh 6:30)
		 Catillio, Edgar (TTh 6:30)

		 Sunday, May 3, 2020

		 CS A250
		 Project 1 - Part A
*/

#include "CharacterType.h"
#include "CandidateType.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// test cases
	CharacterType chartype;
	chartype.setCharacterInfo("Iacob", "Marius", 123456);
	//chartype.printID();
	chartype.printCharacterInfo();
	cout << endl;
	chartype.printName();

	cout  <<  endl;
	system("Pause");
	return 0;
}