/*
		TeamName
		 Iacob, Marius (TTh 6:30)
		 Catillio, Edgar (TTh 6:30)

		 Sunday, May 3, 2020

		 CS A250
		 Project 1 - Part A
*/

#include "CandidateType.h"

using namespace std;

// Implement all functions in the SAME order
// as listed in the interface file.
// Default Constructor
CandidateType::CandidateType()
{
	totalVotes = 0;
	numOfKingdoms = NUM_OF_KINGDOMS;
	kingdomVotes = new int[numOfKingdoms];
}

// Copy Constructor
CandidateType::CandidateType(const CandidateType& otherType)
{
	totalVotes = otherType.totalVotes;
	numOfKingdoms = otherType.numOfKingdoms;
	kingdomVotes = otherType.kingdomVotes;
}

// Copy Assingment operator

// updateVotesByKingdom

// getTotalValues

// getVotesByKingdom

// print functions


// Destructor
CandidateType::~CandidateType()
{

}
