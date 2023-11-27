/*******************************************************************************************************************
* Author: Calyn, Lauren, and Issac
* CS 225 Project
* Purpose: Holds the mastermind functions in order to play the game.
* Based off of Version 1.7 from Apr 1, 2023
* Our versions: 2.0 October 31, 2023
*               Version 2.1 November 18, 2023
*********************************************************************************************************************/
#include "headers.h"
#include "PatternGen.h"
#include "PrintColors.h"
#include "RandomNums.h"
#include "scoreboard.h"
using namespace std;

player easyMasterMind(int point){
    RAND_NUMS randNum;
    randNum=PatternGenerator(3);
    char guess[EASYNUMARRAY];
    int count = 0;
    Colors('W');
    char score[EASYROWS][EASYCOLS] = {
            "*******",
            "*     *",
            "*******"
    };
    Colors('D');
    //printf("%d %d %d %d", rn.num_1, rn.num_2, rn.num_3, rn.num_4);
    cout<<"Type your 3 guesses: "<<endl;
    cin >> guess[0] >> guess[1] >> guess[2];
    //printf("GUESS 1=%c GUESS2=%c GUESS3=%c GUESS4=%c \n", guess1, guess2, guess3, guess4);

    while ((guess[0] != randNum.num[0]) || (guess[1] != randNum.num[1]) || (guess[2] != randNum.num[2])) {
        // create if loop, if the answer is correct, print 1, if incorrect, print 0
        int index = 0;
        while(index < EASYNUMARRAY){
            if(guess[index] == randNum.num[index]){
                Colors('G');
                if(index == 0){
                    score[1][1] = '1';
                }
                if(index == 1){
                    score[1][3] = '1';
                }
                if(index == 2){
                    score[1][5] = '1';
                }
                ++index;
                Colors('D');
            }
            else if(dupValues(randNum.num, guess[index], EASYNUMARRAY) && guess[index] != randNum.num[index]){
                Colors('B');
                if(index == 0){
                    score[1][1] = '0';
                }
                if(index == 1){
                    score[1][3] = '0';
                }
                if(index == 2){
                    score[1][5] = '0';
                }
                ++index;
                Colors('D');
            }
            else{
                if(index == 0){
                    score[1][1] = 'X';
                }
                if(index == 1){
                    score[1][3] = 'X';
                }
                if(index == 2){
                    score[1][5] = 'X';
                }
                ++index;
            }
        }
        print_arrayeasy(score);
        count = count + 1;
        cout<< bold("Count: ")<<count<<endl;
        if (count >= 12){ // If the user cannot guess the code in 12 turns, the game ends
            cout<<"Sorry, you are out of turns. The pattern is "<<endl;
            PrintColors(randNum.num[0]);
            PrintColors(randNum.num[1]);
            PrintColors(randNum.num[2]);
            break;
        }
        cout<<"Type your 3 guesses: "<<endl;
        cin >> guess[0] >> guess[1] >> guess[2];
    }
    if (count <= 12 && (guess[0] == randNum.num[0]) && (guess[1] == randNum.num[1]) && (guess[2] == randNum.num[2])) {
        cout << bold("You are correct!");
        cout << bold("\nThe pattern is:\n ");
        PrintColors(randNum.num[0]);
        PrintColors(randNum.num[1]);
        PrintColors(randNum.num[2]);
        ++point;
    }
    return point;
}


int mediumMasterMind(int point){
    RAND_NUMS randNum;
    randNum=PatternGenerator(4);
    char guess[NUMARRAY];
    int count = 0;
    Colors('W');
    char score[MEDIUMROWS][MEDIUMCOLS] = {
            "*******",
            "*     *",
            "*     *",
            "*******"
    };
    Colors('D');
    //printf("%d %d %d %d", rn.num_1, rn.num_2, rn.num_3, rn.num_4);
    cout<<"Type your 4 guesses: "<<endl;
    cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];
    //printf("GUESS 1=%c GUESS2=%c GUESS3=%c GUESS4=%c \n", guess1, guess2, guess3, guess4);

    while ((guess[0] != randNum.num[0]) || (guess[1] != randNum.num[1]) || (guess[2] != randNum.num[2]) || (guess[3] != randNum.num[3])) {
        // create if loop, if the answer is correct, print 1, if incorrect, print 0
        int index = 0;
        while(index < NUMARRAY){
            if(guess[index] == randNum.num[index]){
                Colors('G');
                if(index == 0){
                    score[1][1] = '1';
                }
                if(index == 1){
                    score[1][5] = '1';
                }
                if(index == 2){
                    score[2][1] = '1';
                }
                if(index == 3){
                    score[2][5] = '1';
                }
                ++index;
                Colors('D');
            }
            else if(dupValues(randNum.num, guess[index], MEDIUMNUMARRAY) && guess[index] != randNum.num[index]){
                Colors('B');
                if(index == 0){
                    score[1][1] = '0';
                }
                if(index == 1){
                    score[1][5] = '0';
                }
                if(index == 2){
                    score[2][1] = '0';
                }
                if(index == 3){
                    score[2][5] = '0';
                }
                ++index;
                Colors('D');
            }
            else{
                Colors('R');
                if(index == 0){
                    score[1][1] = 'X';
                }
                if(index == 1){
                    score[1][5] = 'X';
                }
                if(index == 2){
                    score[2][1] = 'X';
                }
                if(index == 3){
                    score[2][5] = 'X';
                }
                ++index;
                Colors('D');
            }
        }
        print_arraymed(score);
        count = count + 1;
        cout<< bold("Count: ")<<count<<endl;
        if (count >= 12){ // If the user cannot guess the code in 12 turns, the game ends
            cout<<"Sorry, you are out of turns. The pattern is "<<endl;
            PrintColors(randNum.num[0]);
            PrintColors(randNum.num[1]);
            PrintColors(randNum.num[2]);
            PrintColors(randNum.num[3]);
            break;
        }
        cout<<"Type your 4 guesses: "<<endl;
        cin >> guess[0] >> guess[1] >> guess[2] >> guess[3];
    }
    if (count <= 12 && (guess[0] == randNum.num[0]) && (guess[1] == randNum.num[1]) && (guess[2] == randNum.num[2]) && (guess[3] == randNum.num[3]) ){
        cout << bold("You are correct!");
        cout << bold("\nThe pattern is:\n ");
        PrintColors(randNum.num[0]);
        PrintColors(randNum.num[1]);
        PrintColors(randNum.num[2]);
        PrintColors(randNum.num[3]);
        ++point;
    }
    return point;
}

int hardMasterMind(int point){
    RAND_NUMS randNum;
    randNum=PatternGenerator(5);
    char guess[HARDNUMARRAY];
    int count = 0;
    Colors('W');
    char score[HARDROWS][HARDCOLS] = {
            "*******",
            "*     *",
            "*     *",
            "*     *",
            "*******"
    };
    Colors('D');
    //printf("%d %d %d %d", rn.num_1, rn.num_2, rn.num_3, rn.num_4);
    cout<<"Type your 5 guesses: "<<endl;
    cin >> guess[0] >> guess[1] >> guess[2] >> guess[3] >> guess[4];
    //printf("GUESS 1=%c GUESS2=%c GUESS3=%c GUESS4=%c \n", guess1, guess2, guess3, guess4);

    while ((guess[0] != randNum.num[0]) || (guess[1] != randNum.num[1]) || (guess[2] != randNum.num[2]) ||
    (guess[3] != randNum.num[3]) || (guess[4] != randNum.num[4])) {
        // create if loop, if the answer is correct, print 1, if incorrect, print 0
        int index = 0;
        while(index < HARDNUMARRAY){
            if(guess[index] == randNum.num[index]){
                Colors('G');
                if(index == 0){
                    score[1][1] = '1';
                }
                if(index == 1){
                    score[1][5] = '1';
                }
                if(index == 2){
                    score[2][1] = '1';
                }
                if(index == 3){
                    score[2][5] = '1';
                }
                if(index == 4){
                    score[3][1] = '1';
                }
                ++index;
                Colors('D');
            }
            else if(dupValues(randNum.num, guess[index], HARDNUMARRAY) && guess[index] != randNum.num[index]){
                Colors('B');
                if(index == 0){
                    score[1][1] = '0';
                }
                if(index == 1){
                    score[1][5] = '0';
                }
                if(index == 2){
                    score[2][1] = '0';
                }
                if(index == 3){
                    score[2][5] = '0';
                }
                if(index == 4){
                    score[3][1] = '0';
                }
                ++index;
                Colors('D');
            }
            else{
                Colors('R');
                if(index == 0){
                    score[1][1] = 'X';
                }
                if(index == 1){
                    score[1][5] = 'X';
                }
                if(index == 2){
                    score[2][1] = 'X';
                }
                if(index == 3){
                    score[2][5] = 'X';
                }
                if(index == 4){
                    score[3][1] = 'X';
                }
                ++index;
                Colors('D');
            }
        }
        print_arrayhard(score);
        count = count + 1;
        cout<< bold("Count: ")<<count<<endl;
        if (count >= 12){ // If the user cannot guess the code in 12 turns, the game ends
            cout<<"Sorry, you are out of turns. The pattern is "<<endl;
            PrintColors(randNum.num[0]);
            PrintColors(randNum.num[1]);
            PrintColors(randNum.num[2]);
            PrintColors(randNum.num[3]);
            PrintColors(randNum.num[4]);
            break;
        }
        cout<<"Type your 5 guesses: "<<endl;
        cin >> guess[0] >> guess[1] >> guess[2] >> guess[3] >> guess[4];
    }
    if (count <= 12 && (guess[0] == randNum.num[0]) && (guess[1] == randNum.num[1]) && (guess[2] == randNum.num[2]) && (guess[3] == randNum.num[3])
     && (guess[4] == randNum.num[4])){
        cout << bold("You are correct!");
        cout << bold("\nThe pattern is:\n ");
        PrintColors(randNum.num[0]);
        PrintColors(randNum.num[1]);
        PrintColors(randNum.num[2]);
        PrintColors(randNum.num[3]);
        PrintColors(randNum.num[4]);
        ++point;
    }
    return point;
}