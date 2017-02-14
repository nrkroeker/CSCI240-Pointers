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

	if (*ptrRacerA > 49) {
		*ptrRacerA = 49;
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

	if (*ptrRacerB > 49) {
		*ptrRacerB = 49;
	}
}

void printPosition(int* ptrRacerA, int* ptrRacerB) {
	char printRace[RACE_LENGTH];
	for (int a = 0; a < RACE_LENGTH; a++) {
		printRace[a] = ' ';
	}
	printRace[49] = '|';
	printRace[*ptrRacerA] = 'A';
	printRace[*ptrRacerB] = 'B';

	for (int a = 0; a < RACE_LENGTH; a++) {
		std::cout << printRace[a];
	}
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
	std::cout << "___________________________________________________" << std::endl;
	while(*ptrRacerA < 49 && *ptrRacerB < 49) {
		std::cout << "|";
		advanceRacerA(ptrRacerA);
		advanceRacerB(ptrRacerB);
		printPosition(ptrRacerA, ptrRacerB);
		std::cout << "\n";
	}
	std::cout << "|_________________________________________________|" << std::endl;

	if (*ptrRacerA > *ptrRacerB) {
		std::cout << "You won! Nice work, underdog!" << std::endl;
	}
	else {
		std::cout << "Your friend won! Better luck next time." << std::endl;
	}

  return 0;
}
