/*
		TeamName
		 Iacob, Marius (TTh 6:30)
		 Catillio, Edgar (TTh 6:30)

		 Sunday, May 3, 2020

		 CS A250
		 Project 1 - Part A
*/

#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "CharacterType.h"

const int NUM_OF_KINGDOMS = 7;	// this is the capacity of the array
const std::string KINGDOMS[] = {
	"The North",
	"The Vale",
	"The Stormlands",
	"The Reach",
	"The Westerlands",
	"The Iron Islands",
	"Dorne" 
};

class CandidateType	: public CharacterType
{
public:
	// Default constructor

	// Copy constructor
	/*CandidateType(const candidateType& type)
	{

	}*/

	// Copy assignment operator

	// updateVotesByKingdom

	int getTotalVotes()
	{
		return totalVotes;
	}
	int getVotesByKingdom()
	{
		//return VotesByKingdom;
	}

	void printCandidateInfo()
	{

	}
	void printCandidateTotalVotes()
	{

	}

	// Destructor
	~CandidateType();

	
private:
	int totalVotes;
	int numOfKingdoms;
	int *kingdomVotes;
};

#endif
