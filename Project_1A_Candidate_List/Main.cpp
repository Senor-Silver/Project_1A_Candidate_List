/*
		TeamName: OOPS
		 Iacob, Marius (TTh 6:30)
		 Castillo, Edgar (TTh 6:30)

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
	CharacterType chartype("Iacob", "Marius", 123456);
	chartype.printID();
	chartype.printCharacterInfo();
	cout << endl;
	chartype.printName();
	cout << endl;

	CandidateType firstRunnerUP;

	firstRunnerUP.printCandidateInfo();
	// This is an empty Candidate, MUST FIX
	cout << endl;

	firstRunnerUP.setCharacterInfo("Allan", "Poe", 626285);
	firstRunnerUP.printCandidateInfo();
	cout << endl;

	CandidateType secondCandidate(firstRunnerUP);
	secondCandidate.printCandidateInfo();
	cout << endl;

	CandidateType thirdCandidate;
	thirdCandidate = secondCandidate;
	thirdCandidate.printCandidateInfo();
	cout << endl;

	cout << endl;
	system("Pause");
	return 0;
}