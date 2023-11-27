/****************************************************************************************************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: Converts numbers to colors. Colors correspond to a capital letter.
* * Previous Version March 30, 2023
*  Version 1.0 October 26, 2023
*              1.1 October 31, 2023
*  Version 2.0 November 18, 2023
*****************************************************************************************************/
#include "headers.h"
#include "PatternGen.h"
#include "RandomNums.h"

using namespace std;

//Checks for duplicate values within an array.
bool dupValues(char arr[MAX], char key, int arraySize){
    bool multiple = false;
    for(int i = 0; i < arraySize; ++i){
        for(int j = 0; j < arraySize; ++j){
            if(arr[i] == arr[j] && arr[i] == key){
                multiple = true;
            }
        }
    }
    if(multiple){
        return true;
    }
    else{
        return false;
    }
}

//Create loop to convert numbers to colors/letter
char numbers_to_colors(int number)
{
    if (number==2) //red
    {
        return 'R';
    }

    else if (number==3) //blue
    {
        return 'B';
    }

    else if (number==4) //green
    {
        return 'G';
    }

    else if (number==5) // yellow
    {
        return 'Y';
    }

    else if (number==6) // magenta
    {
        return 'M';
    }

    else // cyan
    {
        return 'C';
    }

}

// creates random numbers and sorts them into an index of arguement size.
RAND_NUMS PatternGenerator(int numOfIndex)
{
    srand(time(NULL));
    RAND_NUMS rn;
    for(int i = 0; i < numOfIndex; ++i) {
        rn.num[i] = numbers_to_colors(rand() % 6 + 2);
    }
    //for(int i = 0; i < numOfIndex; ++i){
        //cout << rn.num[i];
    //}
    //cout << endl;
    return rn;
}