
#ifndef UNTITLED_SCOREBOARD_H
#define UNTITLED_SCOREBOARD_H

#define EASYROWS 3
#define EASYCOLS 8

#define MEDIUMROWS 4
#define MEDIUMCOLS 8

#define HARDROWS 5
#define HARDCOLS 15

class player{
private:
    int score;
public:
    int getScore(void){return score;}
    int addScore(int pluspoint){return score += pluspoint;}
    player(int score = 0);
    ~player();
};

void print_arrayeasy(char lines[EASYROWS][EASYCOLS]);
void print_arraymed(char lines[MEDIUMROWS][MEDIUMCOLS]);
void print_arrayhard(char lines[HARDROWS][HARDCOLS]);
#endif //UNTITLED_SCOREBOARD_H
