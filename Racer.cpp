// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include <stdlib.h>
#include <ctime>

#define RACE_LENGTH 50

void advanceRacerA(int* ptrRacerA);
void advanceRacerB(int* ptrRacerB);
void printPosition(int* ptrRacerA, int* ptrRacerB);

void advanceRacerA(int* ptrRacerA) {
	int randint;

	randint = rand()%10 + 1;
	if (randint > 0 && randint <= 3) {
		*ptrRacerA = *ptrRacerA + 4;
	}
	else if (randint > 3 && randint <= 4) {
		*ptrRacerA = *ptrRacerA + 5;
	}
	else if (randint > 4 && randint <= 7) {
		*ptrRacerA = *ptrRacerA - 2;
	}
	else if (randint > 7 && randint <= 9) {
		*ptrRacerA = *ptrRacerA - 3;
	}
	else if (randint = 10) {
		*ptrRacerA = *ptrRacerA - 4;
	}

	if (*ptrRacerA < 0) {
		*ptrRacerA = 0;
	}

	if (*ptrRacerA > 50) {
		*ptrRacerA = 50;
	}
}

void advanceRacerB(int* ptrRacerB) {
	int randint;

	randint = rand()%11;
	if (randint > 0 && randint <= 4) {
		*ptrRacerB = *ptrRacerB + 5;
	}
	else if (randint > 4 && randint <= 5) {
		*ptrRacerB = *ptrRacerB + 6;
	}
	else if (randint > 5 && randint <= 7) {
		*ptrRacerB = *ptrRacerB - 1;
	}
	else if (randint > 7 && randint <= 9) {
		*ptrRacerB = *ptrRacerB - 2;
	}
	else if (randint = 10) {
		*ptrRacerB = *ptrRacerB - 4;
	}

	if (*ptrRacerB < 0) {
		*ptrRacerB = 0;
	}

	if (*ptrRacerB > 50) {
		*ptrRacerB = 50;
	}
}

void printPosition(int* ptrRacerA, int* ptrRacerB) {
	int spacesBefore;
  int spacesBetween;
  int spacesAfter;
	char leadRacer;
	char secondRacer;

	if (*ptrRacerA == *ptrRacerB) {
		*ptrRacerA = *ptrRacerA - 1;
	}

	if (*ptrRacerA > *ptrRacerB) {
		spacesBefore = *ptrRacerB - 1;
    spacesBetween = *ptrRacerA - *ptrRacerB - 1;
    spacesAfter = RACE_LENGTH - *ptrRacerA;
		leadRacer = 'B';
		secondRacer = 'A';
  }
	else {
		spacesBefore = *ptrRacerA - 1;
		spacesBetween = *ptrRacerB - *ptrRacerA - 1;
		spacesAfter = RACE_LENGTH - *ptrRacerB;
		leadRacer = 'A';
		secondRacer = 'B';
	}
	if (spacesBefore != 0) {
	  for (int a = 0; a <= spacesBefore; a++) {
    std::cout << ".";
  	}
	}

  std::cout << leadRacer;

	if (*ptrRacerB - *ptrRacerA != 1 && *ptrRacerA - *ptrRacerB != 1) {
	  for (int a = 0; a <= spacesBetween; a++) {
	    std::cout << ".";
	  }
	}

  std::cout << secondRacer;

	if (spacesAfter != 0) {
		for (int a = 0; a <= spacesAfter; a++) {
    std::cout << ".";
  	}
	}

  std::cout << "|" << std::endl;
};

int main() {
	srand (time(NULL));
	int *ptrRacerA;
	int *ptrRacerB;
	int a = 0;
	int b = 0;
	ptrRacerA = &a;
	ptrRacerB = &b;
	*ptrRacerA = a;
	*ptrRacerB = b;

	std::cout << "Welcome to the Spartan Race!!" << std::endl;
	std::cout << "3...2...1.....GO!" << std::endl;
	while(*ptrRacerA < 50 && *ptrRacerB < 50) {
	std::cout << "|";
	advanceRacerA(ptrRacerA);
	advanceRacerB(ptrRacerB);
	printPosition(ptrRacerA, ptrRacerB);
	}

	if (*ptrRacerA > *ptrRacerB) {
		std::cout << "You won! Nice work, underdog!" << std::endl;
	}
	else {
		std::cout << "Your friend won! Better luck next time." << std::endl;
	}

  return 0;
}
