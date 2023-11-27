
/****************************************************************************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: To print out a scoreboard for user to see while guessing colors.
*  Version 1.0 November 18, 2023
*****************************************************************************/

#include <iostream>
#include "headers.h"
#include "scoreboard.h"
#include "PrintColors.h"
using namespace std;

player::player(int score) {
    this->score = score;
}

player :: ~player(void){
    cout << "You got a score of " << player::score << "." << endl;
}

void print_arrayeasy(char lines[EASYROWS][EASYCOLS]) {
    for (int x = 0; x < EASYROWS; x++) {
        for(int y = 0; y < EASYCOLS-1; y++){
            if(lines[x][y] == 'X'){
                Colors('R');
            }
            else if(lines[x][y] == '0'){
                Colors('Y');
            }
            else if(lines[x][y] == '1'){
                Colors('G');
            }
            std::cout << lines[x][y];
            Colors('D');
        }
       std::cout << std::endl;
    }
}

void print_arraymed(char lines[MEDIUMROWS][MEDIUMCOLS]) {
    for (int x = 0; x < MEDIUMROWS; x++) {
        for(int y = 0; y < MEDIUMCOLS-1; y++){
            if(lines[x][y] == 'X'){
                Colors('R');
            }
            else if(lines[x][y] == '0'){
                Colors('Y');
            }
            else if(lines[x][y] == '1'){
                Colors('G');
            }
            std::cout << lines[x][y];
            Colors('D');
        }
        std::cout << std::endl;
    }
}
void print_arrayhard(char lines[HARDROWS][HARDCOLS]) {
    for (int x = 0; x < HARDROWS; x++) {
        for(int y = 0; y < HARDCOLS-8; y++){
            if(lines[x][y] == 'X'){
                Colors('R');
            }
            else if(lines[x][y] == '0'){
                Colors('Y');
            }
            else if(lines[x][y] == '1'){
                Colors('G');
            }
            std::cout << lines[x][y];
            Colors('D');
        }
        std::cout << std::endl;
    }
}