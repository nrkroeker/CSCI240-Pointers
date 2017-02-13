// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include <stdlib.h>
#include <ctime>

#define RACE_LENGTH 50

void advanceRacerA(int* ptrRacerA) {
	int randint;
	int movePosA;
	int movementsA[10];
	movementsA[0] = 4;
	movementsA[1] = 4;
	movementsA[2] = 4;
	movementsA[3] = 5;
	movementsA[4] = -2;
	movementsA[5] = -2;
	movementsA[6] = -2;
	movementsA[7] = -3;
	movementsA[8] = -3;
	movementsA[9] = -4;
	randint = rand()%10;
	movePosA = movementsA[randint];
	*ptrRacerA = *ptrRacerA + movePosA;

	if (*ptrRacerA < 0) {
		*ptrRacerA = 0;
	}
}

void advanceRacerB(int* ptrRacerB) {
	int randint;
	int movePosB;
	int movementsB[10];
	movementsB[0] = 5;
	movementsB[1] = 5;
	movementsB[2] = 5;
	movementsB[3] = 5;
	movementsB[4] = 6;
	movementsB[5] = -1;
	movementsB[6] = -1;
	movementsB[7] = -2;
	movementsB[8] = -2;
	movementsB[9] = -4;
	randint = rand()%10;
	movePosB = movementsB[randint];
	*ptrRacerB = *ptrRacerB + movePosB;

	if (*ptrRacerB < 0) {
		*ptrRacerB = 0;
	}
}

void printPosition(int* ptrRacerA, int* ptrRacerB) {
	int spacesBefore;
  int spacesBetween;
  int spacesAfter;

	if (*ptrRacerA == *ptrRacerB) {
		*ptrRacerA = *ptrRacerA - 1;
	}

	if (*ptrRacerB > *ptrRacerA) {
    spacesBefore = *ptrRacerA - 1;
    spacesBetween = *ptrRacerB - *ptrRacerA - 1;
    spacesAfter = RACE_LENGTH - *ptrRacerB;
  }
	else {
		spacesBefore = *ptrRacerB - 1;
    spacesBetween = *ptrRacerA - *ptrRacerB - 1;
    spacesAfter = RACE_LENGTH - *ptrRacerA;
	}

  for (int a = 0; a <= spacesBefore; a++) {
    std::cout << ".";
  }

  std::cout << "A";

  for (int a = 0; a <= spacesBetween; a++) {
    std::cout << ".";
  }

  std::cout << "B";

  for (int a = 0; a <= spacesAfter; a++) {
    std::cout << ".";
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
	std::cout << "Let the games begin....." << std::endl;
	while(*ptrRacerA < 50 && *ptrRacerB < 50) {
	std::cout << "|";
	advanceRacerA(ptrRacerA);
	advanceRacerB(ptrRacerB);
	printPosition(ptrRacerA, ptrRacerB);
	}

	if (*ptrRacerA > *ptrRacerB) {
		std::cout << "You won! Your friend might be mad ;)" << std::endl;
	}
	else {
		std::cout << "Your friend won! Better luck next time." << std::endl;
	}

  return 0;
}
