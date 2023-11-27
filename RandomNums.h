
/****************************************************************************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: Converts numbers to colors. Colors correspond to a capital letter.
* Resources: George helped us return the rand_nums rn.
* * Previous Version March 30, 2023
*  Version 1.0 October 26, 2023
*              1.1 October 31, 2023
*****************************************************************************/

#ifndef UNTITLED_RANDOMNUMS_H
#define UNTITLED_RANDOMNUMS_H

#include "headers.h"
#include "PatternGen.h"
#define NUMARRAY 4
using namespace std;
//Create loop to convert numbers to colors/letter

bool dupValues(char arr[MAX], char key, int arraySize);
char numbers_to_colors(int number);
RAND_NUMS PatternGenerator(int);

#endif //UNTITLED_RANDOMNUMS_H
