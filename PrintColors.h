
#ifndef UNTITLED_PRINTCOLORS_H
#define UNTITLED_PRINTCOLORS_H

/*****************************
* Author: Monica Hyndman
* Edited: Isaac Jarrells
* Purpose: To print letters with corresponding colors
* Resources: Professor Marriot
*  For colors: https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
* Version: 1.1 April 4,2023
******************************/

#include "headers.h"
#include "PatternGen.h"
#include <iostream>
#include <string>
#include <iostream>


void PrintColors(char rn);

void Colors(char);

class bold {
    std::string const &s;
public:
    bold(std::string const &s) : s(s) {}

    friend std::ostream &operator<<(std::ostream &os, bold const &bolded) {
        os << "\x1b[1m" << bolded.s << "\x1b[0m";
        return os;
    }
};

#endif //UNTITLED_PRINTCOLORS_H
