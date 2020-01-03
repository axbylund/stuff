// https://www.csestack.org/calling-c-functions-from-python/ 

#include <stdio.h>
#include <stdlib.h>
#include "lib4python.h"

void connect()
{
	printf("Connected to C extension...\n");
}

//return random value in range of 0-50
int randNum()
{
	int nRand = (int)(&nRand) ;
	srand(nRand);

	nRand = rand() % 50;
	return nRand;
}

//add two number and return value
int addNum(int a, int b)
{
	int nAdd = a + b;
	return nAdd;
}