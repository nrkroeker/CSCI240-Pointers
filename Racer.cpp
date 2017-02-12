// Honor Pledge: I pledge that I have neither given nor received any help on this assignment

#include <iostream>
#include <stdlib.h>
#include <ctime>

#define RACE_LENGTH 50

void advanceRacerA(int* ptrRacerA) {
	random_integer = rand()%10;
};
void advanceRacerB(int* ptrRacerB);
void printPosition(int* ptrRacerA, int* ptrRacerB);

int main()
{
	int posA;
  int posB;
  int raceLength;
  int spacesBefore;
  int spacesBetween;
  int spacesAfter;

  if (posB > posA) {
    spacesBefore = posA - 1;
    spacesBetween = posB - posA - 1;
    spacesAfter = raceLength - posB;
  }
	else {
		spacesBefore = posB - 1;
    spacesBetween = posA - posB - 1;
    spacesAfter = raceLength - posA;
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

  return 0;
}
