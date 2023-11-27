/*******************************************************************************************************************
* Author: Calyn, Lauren, and Issac
* CS 225 Project
* Purpose: This file asks the user if they want to play mastermind, then runs the MasterMind function if they do.
* Based off of Version 1.7 from Apr 1, 2023
* Our versions: 2.0 October 31, 2023
*               Version 2.1 November 18, 2023
*********************************************************************************************************************/
#include "headers.h"
#include "PrintColors.h"
#include "scoreboard.h"
#include "mastermind.h"
using namespace std;

int main()
{
    char ans1, ans2, ans3;
    player player;

    cout<<bold("Do you wanna play Mastermind? (y/n) ");
    cin>>ans1;
    while(!cin || toupper(ans1) != 'Y' && toupper(ans1) != 'N'){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid Input!" << endl;
        cout<<bold("Do you wanna play Mastermind? (y/n) ");
        cin>>ans1;
    }
    if (toupper(ans1)== 'Y') {
        try {
            ifstream rulesFile("rules.txt"); // changes if the rules files is a different name.
            if (!rulesFile.is_open()) {
                string error = "Error in opening file.";
                throw(error);
            }
            else {
                string rules;
                while (getline(rulesFile, rules)) {
                    cout << rules << " " << endl;
                }
            }
        }
        catch(string &error){
            cout << error << endl;
        }
        cout << (" ") << endl;
        cout << ("What is your name? ");
        cout<< bold("Are you ready to play? (y/n) ");
        cin>>ans2;
        while(!cin || toupper(ans2) != 'Y' && toupper(ans2) != 'N'){
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid Input!" << endl;
            cout << bold("Are you ready to play? (y/n) ");
            cin >> ans2;
        }
        cout<< "Chose a difficulty to play: (E/M/H): ";
        cin>>ans3;
        while(!cin || toupper(ans3) != 'E' && toupper(ans3) != 'M' && toupper(ans3) != 'H'){
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid Input!" << endl;
            cout<<bold("Do you wanna play Mastermind? (y/n) ");
            cin>>ans3;
        }
        //play game
        int scores = 0;
        while (toupper(ans2) == 'Y') {
            if(toupper(ans3) == 'E') {
                player.addScore(easyMasterMind(scores));
            }
            else if(toupper(ans3) == 'M') {
                player.addScore(mediumMasterMind(scores));
            }
            else if(toupper(ans3) == 'H') {
                player.addScore(hardMasterMind(scores));
            }
            cout << "\nScore: " << player.getScore() << endl;
            // prompt user if they want to play again
            cout << endl << bold("Do you want to play again? (y/n) ");
            cin>>ans2;
            while(!cin || toupper(ans2) != 'Y' && toupper(ans2) != 'N'){
                cin.clear();
                cin.ignore(INT_MAX, '\n');
                cout << "Invalid Input!" << endl;
                cout<<bold("Do you want to play again? (y/n) ");
                cin>>ans2;
            }
            if(toupper(ans2) == 'Y'){
                cout<< "Chose a difficulty to play: (E/M/H): ";
                cin>>ans3;
                while(!cin || toupper(ans3) != 'E' && toupper(ans3) != 'M' && toupper(ans3) != 'H'){
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    cout << "Invalid Input!" << endl;
                    cout<<bold("Do you wanna play Mastermind? (y/n) ");
                    cin>>ans3;
                }
            }
        }
    }
    cout << "Have a nice day!" << endl;
}

