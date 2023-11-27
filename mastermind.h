
/************
* Author: Calyn Bauer, Lauren Bailey, and Issac
* CS 225 Project
* Purpose: This file takes the user's guesses and compares
* them to the code until they get all 4 correct.
*  Previous: Version 1.7  Apr 4, 2023
* Ours: Version 2.0 October 31, 2023
*************/

#ifndef UNTITLED_MASTERMIND_H
#define UNTITLED_MASTERMIND_H

#include "headers.h"
#include "PatternGen.h"
#include "PrintColors.h"
#include "RandomNums.h"
#define NUMARRAY 4
using namespace std;

int easyMasterMind(int point);
int mediumMasterMind(int point);
int hardMasterMind(int point);

#endif //UNTITLED_MASTERMIND_H