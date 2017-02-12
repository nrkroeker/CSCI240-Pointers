// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include <stdlib.h>
#include <ctime>

#define RACE_LENGTH 25

void advanceRacerA(int* ptrRacerA) {

}

void advanceRacerB(int* ptrRacerB) {

}
void printPosition(int* ptrRacerA, int* ptrRacerB) {
	int spacesBefore;
  int spacesBetween;
  int spacesAfter;

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

  for (int a = 0; a < spacesBefore; a++) {
    std::cout << ".";
  }

  std::cout << "A";

  for (int a = 0; a < spacesBetween; a++) {
    std::cout << ".";
  }

  std::cout << "B";

  for (int a = 0; a < spacesAfter; a++) {
    std::cout << ".";
  }

  std::cout << "|";

};

int main()
{
	int* ptrRacerA;
	int* ptrRacerB;
	*ptrRacerA = 5;
	*ptrRacerB = 8;

	// advanceRacerA(ptrRacerA);
	// advanceRacerB(ptrRacerB);

	printPosition(ptrRacerA, ptrRacerB);

  return 0;
}
